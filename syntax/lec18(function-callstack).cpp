/*
🧠 FUNCTION CALL STACK – FULL SUMMARY:
💡 Real-Life Analogy (LIFO Example):
Soch tu ek aadmi hai jo kaam karte-karte dusre kaam me ghus jaata hai —
aur fir sab kaam reverse order me complete karta hai. (Last In, First Out)
Example:
1. Tu chai bana raha tha 🍵
2. Tabhi phone baj gaya → tu call utha leta hai ☎️
3. Tabhi door bell baj gayi → tu gate kholne chala gaya 🚪
Ab tu ek-ek karke reverse order me kaam complete karta hai:
👉 Pehle gate khola
👉 Fir phone ka call complete
👉 Fir wapas chai banana complete

📘 Yehi concept programming me bhi hota hai — isse kehte hain "Function Call Stack".
🔧 Technical Explanation:
- Jab bhi ek function call hota hai, wo call stack me push hota hai
- Jab function complete hota hai, wo stack se pop ho jaata hai
- Call Stack = LIFO structure → Last In, First Out
- Har function ka "activation record" stack me temporary memory banata hai
🔄 Example Order:
main() → fun1() → fun2() → fun3()
Return order: fun3 → fun2 → fun1 → main

📘 FUNCTION CALL STACK SUMMARY:
🔹 Call Stack = Memory stack jahan function calls store hote hain
🔹 Stack follows LIFO: Last In, First Out
🔹 Jab ek function dusre function ko call karta hai:
    1. Naya function stack me push hota hai
    2. Jab wo complete ho jaata hai, return hota hai (pop)
🔹 Yeh system recursive aur nested calls handle karta hai

🧠 Soch: Call stack ek kaam ki list hai — pehle andar gaya wahi sabse pehle bahar aata hai!
📌 Is system se nested ya recursive functions smoothly handle hote hain.
*/



//ex of functions
#include <iostream>
using namespace std;
//Q1.write a function to PRINT sum of 3 numbers
void printSum(int a,int b, int c){
    int answer=a+b+c;
    cout<<"sum is: "<<answer<<endl;
}

//Q2.write a function to RETURN sum of 3 numbers
int returnSum(int d,int e, int f){
    int sum=d+e+f;
    return sum;
}

//Q3.check prime or not and RETURN true if n is prime other wise return false
bool checkPrime(int n){ //bool use kiya kyoki hame return true or false karna he
    for(int i=2;i<n;i++){
        if(n%i==0){
            //remainder=0 -->perfectly divisible so not a prime
            return false;
        }
    }
    //yaha pe me keh sakta hu ki [2,3,4,5...n-1],koi bhi n ko perfectly divide nahi karta
    //so this is prime
    return true;
}

int main() {
   printSum(1,2,3);
   cout<<returnSum(4,5,6)<<endl;
   cout<<checkPrime(1); //Q3.check prime vala
    return 0;
}