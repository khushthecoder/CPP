/*
===============================
🔍 LINEAR SEARCH SUMMARY (C++)
===============================
✅ What is Linear Search?
- Linear Search ek simple searching algorithm hai jo array/list ke elements ko ek-ek karke check karta hai.
- Jab tak element mil na jaye ya array finish na ho jaye, tab tak check karta rehta hai.
🎯 How it works?
1. Start from index 0
2. Check: arr[i] == key?
3. Agar haan → return index (element mil gaya)
4. Agar nahi → next index par jao
5. End tak na mile → "Not found"

🧠 Example:
int arr[5] = {10, 20, 30, 40, 50};
key = 30;
Loop: 10 → 20 → 30 ✅ → Found at index 2

🧾 Code Pattern:
for(int i = 0; i < n; i++) {
    if(arr[i] == key) {
        return i; // index of found element
    }
}

📈 Time Complexity:
- Best Case:   O(1)     → First index pe mil jaye
- Worst Case:  O(n)     → End ya not found
- Average:     O(n)
- Space:       O(1)     → No extra memory used

🏠 Real Life Analogy:
Ek almari me kitaabein hain (Books in a shelf).
Tu ek-ek karke har book check karega jab tak "DSA Notes" mil na jaye. Yeh hai Linear Search.

📌 When to Use:
- Jab data sorted nahi ho
- Jab size chhota ho
- Jab simple solution chahiye

📛 Limitation:
- Slow for large data (O(n) time)
- Har element ko dekhna padta hai (no skipping)

*/


#include <iostream>
using namespace std;
int main() {
    int arr[5]={2,8,4,3,5};
    int target=8;
    int n=5;
    bool flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=1;
            cout<<"found at index:"<<i<<endl;
            break;
        }
    }
    if (flag==1){
        cout<<"target found";
    }
    else{
        cout<<"target not found";
    }
    return 0;
}