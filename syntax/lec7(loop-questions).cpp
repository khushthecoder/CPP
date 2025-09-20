#include <iostream>
using namespace std;

// Newton School Online C++ compiler to run C++ online.
// Write C++ code in this online editor and run it.

int main() {
    for(int i=1;i<=10;i++){
        cout<<19*i<<endl;
    }
    // print even numbers
    for (int i=0;i<=100;i=i+2){
        // cout<<i<<endl;
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    // or another methor for even numbers
    for (int i=1;i<=100;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
}