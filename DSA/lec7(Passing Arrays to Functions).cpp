/* 
===========================
📘 Arrays and Functions in C++
===========================
🔸 Passing Array to Function
 -> Array ko function me pass karne ke liye sirf uska naam likhte hain (base address pass hota hai).
 -> Example: printArray(arr, size);

 🔸 Why pass size separately?
 -> C++ me function ko sirf pointer milta hai, size nahi milta.
 -> Isliye `int size` bhi pass karna padta hai.

 🔸 Function Definition
 -> void printArray(int arr[], int size) {
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
    }

 🔸 Key Concept
 -> Arrays are passed by reference (actually by pointer).
 -> Function ke andar array me jo bhi changes honge, wo original array pe reflect honge.

 🔸 Example Summary:
      int arr[5] = {1,2,3,4,5};
      int size = 5;
      solve(arr, size);  // Function call
     -> Function can read/write the original array.

    EX-
    void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
        }
    cout << endl;
  }

    int main() {
        int arr[5] = {10, 20, 30, 40, 50};
        int size = 5;
        printArray(arr, size);  // Array passed to function
    }
    output:10 20 30 40 50
*/
#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Q.write a function for linear search
//present->true
//absent->false
bool linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            //found
            return true;
        }
    }
    //hame jab target value nahi mili hogi toh hi ye niche vala run karega
    //not found
    return false;
}
int main() {
    int arr[5]={2,6,4,8,3};
    int size=5;
    int taget=8;
    //function call
    printArray(arr,size);
    cout<<linearSearch(arr,size,taget);
    return 0;
}