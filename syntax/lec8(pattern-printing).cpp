#include <iostream>
using namespace std;


int main() {
    // print a square of 4x4 star
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    // print a rectangle
    for (int i=0;i<3;i++){
        for (int j=0;j<5;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
}