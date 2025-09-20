/*
🔸 Topic: Function Call By Value vs By Reference (with Reference Variable)

----------------------------------------------------
🔹 What is a Reference Variable?

- Syntax: int &k = n;
- Reference variable is just another name (alias) for an existing variable.
- It does NOT create a new memory — both variables point to the SAME memory.
- Any change made through the reference variable also affects the original variable.

Example:
int n = 5;
int &k = n;

Now 'k' and 'n' refer to the same memory location.
So, if you change k, n also gets updated, and vice versa.

----------------------------------------------------
🔹 Memory Analogy:

    +----------+
    |    5     |  ← Memory block
    +----------+
      ↑    ↑
      n    k   (both pointing to same location)

----------------------------------------------------
🔹 Real Life Analogy:

Think of 'n' as your original name, and 'k' as your nickname.
Both refer to the same person — change one, the other is automatically affected.

----------------------------------------------------
🔹 Why useful in Functions?

Function Call by:
1️⃣ Value → Passes a copy (original NOT affected)
    void fun(int x) → Changes inside function don’t affect original.

2️⃣ Reference → Passes the original variable (original IS affected)
    void fun(int &x) → Changes inside function reflect in caller too.

----------------------------------------------------
🔹 Mini Example:

int a = 10;
int &b = a;
b = b + 5;
cout << a;  // Output: 15

Explanation:
'b' is just another name for 'a', so changing b = b+5 makes a = 15.

----------------------------------------------------

✅ Use reference when:
- You want the function to modify original value.
- You want to avoid copying large data (like arrays, vectors etc).

*/


#include <iostream>
using namespace std;

int incrementBy1(int num){
    num=num+1;
    return num;
}
int main() {
    int a=5; // normal integer variable
    
    //k is a reference variable referring to a;
    int &k=a; // nick name givent to "a"

    //c is reference variable referring to a;
    int &c=a; // nick name givrn to "a";

    cout<<"a:"<<a<<endl;
    cout<<"k:"<<k<<endl;
    cout<<"c:"<<c<<endl;

    k++;
    cout<<"a:"<<a<<endl;
    cout<<"k:"<<k<<endl;
    cout<<"c:"<<c<<endl;
    //mene k ki value +1 ki toh sabki value +1 hogi kyoki n,k,c tino ek hi banda he

    //concept-->FUNCTION CALL BY VALUE in C++
    int original;
    cin>>original;
    cout<<incrementBy1(original)<<endl;
    cout<<original;
    return 0;
}

/*
✅ FUNCTION CALL BY VALUE in C++ (With RETURN mechanism)

📌 Concept:
Function ko variable bhejne par uski **copy** jaati hai — original variable nahi.

🧠 Code Flow Explanation:
---------------------------------------
int incrementBy1(int num) {
    num = num + 1;     // Function ke andar 'num' change ho raha hai
    return num;        // Naya value return ho raha hai
}

int main() {
    int original;
    cin >> original;   // Suppose input: 5
    original = incrementBy1(original);  // Return value assign ho rahi hai
    cout << original;
}
---------------------------------------

🧾 Step-by-Step:
1. User inputs 5 → original = 5
2. Function call: incrementBy1(original)
   🔸 'original' ki ek **copy** jaati hai as 'num'
   🔸 Function ke andar 'num = num + 1' → ab num = 6
3. Function return karta hai 6
4. main me: original = 6 (assign kiya gaya hai return se)

🧠 MEMORY LOGIC (Diagram Style):
main() → original @ 0x01 → value = 5  
function → num     @ 0x52 → value = 5 (copy)

Inside function → num = 6  
Return hua 6 → assign hua original = 6

📌 Important:
✅ Function me copy send hoti hai (not original)
❌ Agar return na karein, to main ka n change nahi hota
✅ return karne se hum manually value update kar rahe hain

🔸 Real-Life Analogy:
Tu kisi ko apna photo bhejta hai (na ki khud)
Woh banda us photo me editing karta hai (copy me)
Wapas bhejta hai — tu us edited photo ko original se replace kar deta hai 😄

📛 NOTE:
- Function parameter name: `num` (copy hai)
- Main ka variable: `original` (actual input hai)
*/