#include <iostream>
using namespace std;
// Write C++ code in this online editor and run it.

int main() {
    // print a hollow rectangle
    int rows;
    int cols;
    cin>>rows;
    cin>>cols;
    for (int row=0;row<rows;row++){
        for (int col=0;col<cols;col=col+1){
            if(row==0 || row==rows-1){
                cout<<"* ";
            }
            else{
                if (col==0 || col==cols-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}