#include <iostream>
using namespace std;
//Fibonacci series ek aisi series hoti hai jisme pehle do numbers 0 aur 1 hote hain, aur uske baad har number apne pichhle do numbers ka sum hota hai.
/*
Fibonacci series start: 0, 1
3rd number = 0 + 1 = 1
4th number = 1 + 1 = 2
5th number = 1 + 2 = 3
6th number = 2 + 3 = 5
7th number = 3 + 5 = 8
Series: 0, 1, 1, 2, 3, 5, 8…
*/
int fib(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int ekchota = fib(n-1);
    int dochota = fib(n-2);   
    int fibb = ekchota + dochota;
    return fibb;
}
int main(){
    int n;
    cin >> n;          
    int ans = fib(n);
    cout << ans;       
}

//FIBONACCI question wsolve by for loop
/*
int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    if (n == 1) {
        cout << 1;
        return 0;
    }
    int a = 0;
    int b = 1;
    int c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c;
}
*/

//BY PYTHON
/*
n = int(input())
if n == 0:
    print(0)
    exit()
if n == 1:
    print(1)
    exit()
a = 0
b = 1
for i in range(2, n + 1):
    c = a + b
    a = b
    b = c
print(c)
*/