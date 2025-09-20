/*
🧠 TIME & SPACE COMPLEXITY — DSA KA HEART 💥
--------------------------------------------
🔸 1. TIME COMPLEXITY
→ Code ko run hone me kitna time lagta hai
→ Input size (n) ke hisaab se code slow ya fast hota hai
→ Expressed in Big O (Worst-case)

📌 COMMON TIME COMPLEXITIES:
- O(1): Constant → Direct access
  int x = arr[0];

- O(log n): Logarithmic → Binary Search
  while(low <= high) { mid = (low+high)/2; }

- O(n): Linear → Single loop
  for(int i = 0; i < n; i++) { ... }

- O(n log n): Efficient Sorting → Merge Sort, Quick Sort
  mergeSort(arr, 0, n-1);

- O(n^2): Nested loops → Brute Force
  for(int i=0; i<n; i++) for(int j=0; j<n; j++) ...

- O(2^n): Exponential → Recursive Fibonacci
  fib(n) = fib(n-1) + fib(n-2);

- O(n!): Factorial → All permutations
  for each permutation of array...
--------------------------------------------

🔸 2. SPACE COMPLEXITY
→ Kitni extra memory use ho rahi hai code me
→ Variable, array, recursion stack sab count hota hai

📌 COMMON SPACE CASES:
- O(1): No extra space
  sum = 0;

- O(n): Extra array use kiya
  int temp[n];

--------------------------------------------
🔍 TIPS:
- Loop = add/multiply times → Count iterations
- Recursion = Tree or recurrence relation
- Always find WORST CASE (Big-O)

--------------------------------------------
📚 EXAMPLES:

1️⃣  Linear Loop (O(n) Time, O(1) Space)
for(int i = 0; i < n; i++) {
   cout << i;
}

2️⃣  Nested Loop (O(n²) Time, O(1) Space)
for(int i = 0; i < n; i++) {
   for(int j = 0; j < n; j++) {
      cout << i << j;
   }
}

3️⃣  Logarithmic (O(log n) Time)
int i = 1;
while(i < n) {
   i *= 2;
}

4️⃣  Space Example (O(n) Space)
int temp[n];  // Extra array of size n

--------------------------------------------
🧪 Yaad rakhne ka mantra:
"Jitni baar kaam, utni baar time"
"Jitna extra samaan, utni space"
--------------------------------------------
*/

// USE of TIME AND SPACE COMPLEXITY
/*
🧠 WHY TIME & SPACE COMPLEXITY MATTERS — SUMMARY 💥

🔸 TIME & SPACE COMPLEXITY ka use kis liye hota hai?
→ Ye batata hai ki code sirf "sahi" nahi, "efficient" bhi hai ya nahi.
→ Jab input size (n) badhta hai, toh code kitna slow ya memory-heavy ho jaata hai — uska analysis karne ke liye.

-----------------------------------------------------
🔹 TIME COMPLEXITY:
- Measure karta hai ki code run hone me kitna "samay" lagta hai.
- Expressed in Big-O (worst-case).
- Jaise: O(1), O(log n), O(n), O(n^2), O(2^n), etc.

🔹 SPACE COMPLEXITY:
- Kitni "extra memory" chahiye code ko run hone ke liye.
- Includes: variables, arrays, recursion stack, etc.

-----------------------------------------------------
📱 REAL-WORLD EXAMPLE:

Soch tu Google Search kar raha hai "pizza near me"
- If Google goes through 1 crore entries **one by one (O(n))**, result aane me der lagegi
- But agar woh **fast searching algo (O(log n))** use kare — result turant aata hai

➡️ Isiliye **optimized time complexity** important hai — warna tera app slow ho jaayega!

-----------------------------------------------------
💡 INTERVIEW INSIGHT:
- Har DSA question ke baad interviewer puchta hai:
  "What's the time and space complexity?"
- Agar tujhe ye nahi aata, toh **code sahi hone ke baad bhi reject** ho sakta hai!

-----------------------------------------------------
✅ TL;DR:
"Code likhna aana chahiye,
lekin **fast aur smart code likhna zaroori** hai.
Time aur Space Complexity usi ka scale hai."
-----------------------------------------------------
*/





#include <iostream>
using namespace std;
int main() {
    cout << "Hello from Newton School! 👋" ;
    return 0;
}