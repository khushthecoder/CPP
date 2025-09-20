/*
📘 FUNCTION SUMMARY – C++ (Desi Style)
🔹 Function kya hota hai?
   Ek reusable block of code jo specific kaam karta hai.
   Bar-bar likhne ki jagah sirf call karo — kaam ho gaya!
🔹 Syntax:
   return_type function_name(parameters) {
       // statements
       return value;  // (agar return_type void nahi hai)
   }
🔹 Example:
   int add(int a, int b) {
       return a + b;
   }
🔹 Types of Functions:
    1️⃣ No return, No parameters:
       void greet() { cout << "Hello"; }
    2️⃣ Return, No parameters:
       int getValue() { return 10; }
    3️⃣ No return, With parameters:
       void print(int n) { cout << n; }
    4️⃣ Return, With parameters:
       int square(int x) { return x * x; }
🔹 Fayda kya hai?
   ✅ Code clean aur manageable hota hai
   ✅ Reusability badhti hai
   ✅ Debug karna easy hota hai
🧠 Tip:
   - Agar function kuch return nahi karta → use `void`
   - Agar answer chahiye → use `int`, `float`, etc.
🛠 Use karo function jaise tools — har kaam ke liye ek tool!
*/


#include <iostream>
using namespace std;
void printLine(){  //ye function kuch return nahi karega hame print karvana he not return karvana he so we use void
    for(int i=0;i<5;i++){
        cout<<"hi lala"<<endl;
    }
}
// ex2
int addNumbers(int a,int b){
    int sum=a+b;
    return sum;
}
int main() {
    printLine();
    cout<<endl;
    printLine();
    cout<<addNumbers(5,6); //return kiya
    return 0; //this shows that function is completely done
}