#include <iostream>
using namespace std;

// Newton School Online C++ compiler to run C++ online.
// Write C++ code in this online editor and run it.

int main() {
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // inverted half numeric pyramid
    for(int r=0;r<n;r++){
        for(int c=0;c<n-r;c++){
            cout<<c+1<<" ";
        }
        cout<<endl;
    }
}