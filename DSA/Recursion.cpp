#include <iostream>
using namespace std;

//EX1
int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    int chotti=factorial(n-1);
    int badi=n*chotti;
    return badi;
}

//EX2 (2 ki power vala)
int power(int n){
    if (n==0){
        return 1;
    }
    int choti=power(n-1);
    int badi=2*choti;
    return badi;
}

//Ex3 print counting
int counting(int l){
    if (l==0){
        return;
    }
    cout<<l<<endl;
    int badi=counting(l-1);
    return badi;
}

int main(){
    int n;
    cin>>n;              // INPUT: 5
    int ans = factorial(n);
    cout<<ans;           // OUTPUT: 120
    cout<<endl;

    //EX2
    int m;
    cin>>m;              // INPUT: 3
    int bns=power(n);    
    cout<<bns;           // OUTPUT: 32 (2^5),  8 (2^3)
    cout<<endl;

    //Ex3
    int l;
    cin>>l;              // INPUT: 4
    int cns=counting(l); // prints 4 3 2 1 line by line
    cout<<cns;           // OUTPUT: 0 (garbage/undefined, kyunki counting kuch return nahi karta)
}

/*
=== SAMPLE INPUT ===
5
3
4

=== SAMPLE OUTPUT ===
120
32
4
3
2
1
0
*/



//FACTORIAL CODE IN PYTHON
/*
def factorial(n):
    # base case
    if n == 0:
        return 1
    chotti = factorial(n - 1)
    badi = n * chotti
    return badi

n = int(input())
ans = factorial(n)
print(ans)

*/

//POWER CODE IN PYHTON
/*  
    def power(m):
        if(m==0):
            return 1
        choti=power(n-1)
        badi=2*choti
        return badi
    m=int(input())
    ans=power(m)
    print(ans)
*/

//COUNTING CODE IN PYTHON
/*
def counting(l):
    if l==0:
        return
    print(l)
    return counting(l-1)
l=int(input())
cns=counting(l)
print(cns)
*/