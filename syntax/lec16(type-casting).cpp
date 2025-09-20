// type-casting --> typecasting ka matlab hota hai: ek data type ko dusre data type mein badalna (convert karna)
#include <iostream>
using namespace std;
int main() {
    //implicit casti(Automatic Conversion)-->Ye compiler khud hi kar deta hai, jab data loss ka risk na ho.
    //1.int to float
    int num1=10;
    float num2=5.5;
    float result=num1+num2;
    cout<<result<<endl;

    // 2. char to int
    char ch='A';
    int n=ch+1;
    cout<<n<<endl;

    // 3.int to char
    int a=97;
    char cha=a;
    cout<<cha<<endl;
    
    // Explicit Typecasting (Manual Conversion)-->Jab tum khud compiler ko bolte ho ki "bhai, convert kar de isko!"
    int n1=10;
    float n2=5.5;
    float r=n1+(int)n2; //idhar hamne alag se bata ki n2 ko int me convert kar
    cout<<r<<endl;

}


/*
📌 BONUS: Division Result Rules in C++
1️⃣ int / int ➡️ int
   ➤ Decimal part truncate ho jata hai (cut off)
   ➤ Example: 5 / 2 = 2
2️⃣ int / float ➡️ float
   ➤ Ek operand float ho toh result bhi float
   ➤ Example: 5 / 2.0 = 2.5
3️⃣ float / int ➡️ float
   ➤ Again, ek operand float → result float
   ➤ Example: 5.0 / 2 = 2.5
🧠 Rule: Agar operands me se koi bhi float/double ho,
        toh result bhi float/double hota hai.
*/