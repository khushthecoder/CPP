#include <iostream>
#include <vector>
#include <algorithm> // sort ke liye
using namespace std;

int main() {

    // ------------------ 1. Vector kya hai ------------------
    // Vector ek dynamic array hai (size apne aap badhta / ghata hai).

    // ------------------ 2. Declare karna ------------------
    vector<int> v;         // int type vector
    vector<string> names;  // string type vector

    // ------------------ 3. Push_back (add element) ------------------
    v.push_back(10);  // element add at last
    v.push_back(20);
    v.push_back(30);

    // ------------------ 4. Size aur access ------------------
    cout << "Size: " << v.size() << endl; // number of elements
    cout << v[1] << endl;    // direct access (20)
    cout << v.at(2) << endl; // safe access with bound check (30)

    // ------------------ 5. Useful functions ------------------
    cout << v.front() << endl;  // first element
    cout << v.back() << endl;   // last element
    v.pop_back();               // last element remove
    cout << "After pop_back size: " << v.size() << endl;
    cout << (v.empty() ? "Empty" : "Not Empty") << endl;

    // ------------------ 6. Initialization ke aur tareeke ------------------
    vector<int> v1(5);        // 5 elements, sab 0
    vector<int> v2(5, 100);   // 5 elements, sab 100
    vector<int> v3 = {1,2,3}; // directly initialize

    // ------------------ 7. Looping / Traversal ------------------
    // Normal for loop
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Iterator loop
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Range-based for loop
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // ------------------ 8. Insert & Erase ------------------
    vector<int> nums = {10, 20, 30, 40};
    nums.insert(nums.begin() + 2, 99); // index 2 pe insert
    // nums = {10,20,99,30,40}
    nums.erase(nums.begin() + 1); // index 1 wala delete
    // nums = {10,99,30,40}

    // ------------------ 9. Swap karna ------------------
    vector<int> a = {1,2,3};
    vector<int> b = {10,20};
    a.swap(b); 
    // ab a = {10,20}, b = {1,2,3}

    // ------------------ 10. Sorting ------------------
    vector<int> arr = {5,2,9,1,7};
    sort(arr.begin(), arr.end());   // ascending
    // arr = {1,2,5,7,9}
    sort(arr.rbegin(), arr.rend()); // descending
    // arr = {9,7,5,2,1}

    // ------------------ 11. 2D Vector (matrix jaisa) ------------------
    vector<vector<int>> mat(3, vector<int>(3, 0));
    // 3x3 matrix, sab jagah 0
    mat[0][1] = 5;
    mat[2][2] = 9;

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // ------------------ 12. Duplicates remove karna ------------------
    vector<int> dup = {1,2,2,3,4,4,5};
    sort(dup.begin(), dup.end()); 
    dup.erase(unique(dup.begin(), dup.end()), dup.end());
    // ab dup = {1,2,3,4,5}

    return 0;
}
