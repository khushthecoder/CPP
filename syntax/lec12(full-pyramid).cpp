#include <iostream>
using namespace std;

// Newton School Online C++ compiler to run C++ online.
// Write C++ code in this online editor and run it.

int main() {
    int n;
    cin>>n;
    for (int row=0;row<n;row++){
        // print space
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}