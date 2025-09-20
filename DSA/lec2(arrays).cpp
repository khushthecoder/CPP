/*
    🔢 ARRAY SUMMARY IN C++
    
    📦 Array ek fixed-size container hota hai 
        jisme ek jaise type ke multiple elements store hote hain
        (int, float, char, etc)

    🧠 Real-life Example:
        Soch: Ek classroom ke 5 students ke marks store karne ho.
        To tum 5 alag variables banane ke bajaye ek array use kar sakte ho.

    🔧 Syntax: data_type array_name[size];
        Example: int marks[5];

    🧮 Initialize karne ka tarika:
        int marks[5] = {90, 85, 78, 92, 88};

    🔍 Access karne ka tarika:
        marks[0] ka matlab hai first student ka marks
        Array indexing 0 se start hoti hai

        cout << marks[0] << endl;  // prints 90
        cout << marks[3] << endl;  // prints 92

    🔁 Array ko loop se traverse kar sakte ho:
        Yahan pe hum 5 students ke marks print kar rahe hain

        for (int i = 0; i < 5; i++) {
            cout << "Student " << i + 1 << " ka marks: " << marks[i] << endl;
        }

    ✅ Important Points:
    - Array ka size fix hota hai (change nahi hota runtime pe)
    - Sare elements same data type ke hone chahiye
    - Memory me continuous block me store hota hai
    - Access fast hota hai (O(1) time using index)
    - Index out of bound error ka dhyan rakhna 
    - continous memory block

    EX-
    int marks[5] = {90, 85, 78, 92, 88};
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << " ka marks: " << marks[i] << endl;
        // Output:
        // Student 1 ka marks: 90
        // Student 2 ka marks: 85
        // Student 3 ka marks: 78
        // Student 4 ka marks: 92
        // Student 5 ka marks: 88
    }
    IMP.
        --> ✅ Array ke sare element memory me ek sath, seedhe sequence me store hote hain — koi gap nahi hota beech me
        (isliye arrays continus memory le raha hota he)
        🟧🟧🟧🟧🟧🟧🟧🟧 ← Jaise is box wale diagram me dikh raha hai:
    - Har block ek element ko represent karta hai
    - Saare blocks ek dusre ke bilkul paas-paas hain
    - Beech me koi khaali space nahi hoti
    📌 Isko kehte hain: **"CONTIGUOUS memory allocation"**
    isliye access fast hota hai (O(1) time)

    //FOR EASY UNDERSTANGING 
    
    📦 Array in Memory (Box Format):
┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
│ ML1  │ ML2  │ ML3  │ ML4  │ ML5  │ ML6  │ ML7  │ ML8  │   ← Memory Locations
├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
│arr[0]│arr[1]│arr[2]│arr[3]│arr[4]│arr[5]│arr[6]│arr[7]│   ← Array Elements
└──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘

🧠 Iska matlab:
- Array ke elements ek ke baad ek memory me side-by-side store hote hain
- Har element ek memory location occupy karta hai
- Beech me koi gap nahi hota → isse kehte hain "contiguous memory allocation"

🎯 Example:
  Agar arr[0] ka address ML1 hai,
  to arr[1] ka address ML2 hoga,
  arr[2] ka ML3... and so on.

✅ Is structure ki wajah se array fast hota hai access karne me (O(1) time)
    */



/*
📦 Array Types Summary (Comment Format):

| Type            | Size Fixed? | Memory | Resize Possible? | Use Case                          |
|-----------------|-------------|--------|------------------|-----------------------------------|
| Static Array     | ✅ Yes       | Stack  | ❌ No             | Fast, simple, but limited usage   |
| Dynamic Array    | ❌ Runtime   | Heap   | ✅ Yes (manual)   | Jab size input pe depend kare    |
| 1D Array         | ✅ Fixed     | Stack  | ❌ No             | List of items (marks, scores)     |
| 2D Array         | ✅ Fixed     | Stack  | ❌ No             | Matrix, tables, grids            |
| std::array       | ✅ Fixed     | Stack  | ❌ No             | Safer version of static array    |
| std::vector      | ❌ Dynamic   | Heap   | ✅ Yes (auto)     | Real projects, CP, flexible size |

🧠 Notes:
- Stack memory = limited but fast
- Heap memory = large but needs manual management (except vectors)
- std::vector = best for dynamic size + built-in functions
*/


/*
✅ 1. Static Array (Fixed Size)

🔧 Syntax:
    int arr[5] = {1, 2, 3, 4, 5};

📌 Features:
- Size compile time pe fix hota hai (arr[5])
- Memory stack me allocate hoti hai
- Fast access hota hai
- Size change nahi kar sakte (limited flexibility)

🎯 Use Cases:
- Jab size pehle se pata ho
- DSA basics, Competitive Programming me commonly use hota hai
*/


/*
✅ 2. Dynamic Array (Runtime Size)

🔧 Syntax:
    int* arr = new int[n];  // n user se input le sakte ho

📌 Features:
- Size runtime pe decide hota hai (flexible)
- Memory heap me allocate hoti hai
- `new` keyword se banate hain
- Memory manually free karni hoti hai: delete[] arr;

🎯 Use Cases:
- Jab size input pe depend kare
- Jab large memory chahiye
- Real-world coding, memory control required
*/


#include <iostream>
using namespace std;
int main() {
   int arr[5]={6,45,98,6,7};
   for(int i=0;i<5;i++){
    cout<<arr[i]<<' ';
   }
    cout<<endl;
   //memory alocation Example
   cout<<"base aress of arr is:"<<&arr<<endl;
   cout<<"base aress of arr is:"<<arr<<endl; //arr ke aage agr hum '&' na lagaye toh bhi chalega 
   int a=5;
   cout<<"address of a:"<<&a<<endl; //jab bhi kisi ka bhi adrres find karna ho toh--> &a (a is variable name)

   //size find karne ke liye use kare --> sozeof()
   cout<<"size of a:"<<sizeof(a)<<endl; //a ek integer he so integer has 4 bytes
   cout<<"size of arr:"<<sizeof(arr)<<endl; //arr store integer and arr has 5 integerso 5*4=20bytes

   //taking input in array
   int brr[4];
   for (int i=0;i<4;i++){
    cout<<"enter element:"<<i<<" ";
    cin>>brr[i];
    cout<<brr[i]<<endl;
   }
    //print brr
    cout<<"printing the array"<<endl;
    for(int i=0;i<4;i++){
        cout<<brr[i]<<" ";
    }
   
    return 0;
}

/*
   ==>MEMORY ALLOCATION OF VARIABLES IN C++ (SYMBOL TABLE + REAL ANALOGY)
   -----------------------------------------------------------------------
    ✅ int a = 5; ka matlab:
    Ek integer variable 'a' banaya aur usme 5 store kiya.

    🧠 Memory Level pe kya hota hai:
    1. Compiler ek Symbol Table banata hai:
       - a → 104 (maan lo address 104 mila)
       - b → 108 (maan lo address 108 mila)

    2. Value memory me store hoti hai:
       - Address 104 par value 5
       - Address 108 par value 10

    3. Jab tu likhta hai cout << a;:
       - Compiler dekhta hai: a kis address pe hai → 104
       - Fir us address se value fetch karke print karta hai → 5

    📦 Memory Table:
    | Variable | Address | Value |
    |----------|---------|-------|
    |   a      |   104   |   5   |
    |   b      |   108   |  10   |

    🏠 Real Life Analogy:
    - a = ek ghar ka naam (jaise "KC Villa")
    - 104 = us ghar ka address
    - 5 = ghar ke andar rakha hua samaan
    - Jab tu cout << a karta hai, to matlab: 
      "KC Villa ke andar kya rakha hai?" ➜ Output: 5
    */