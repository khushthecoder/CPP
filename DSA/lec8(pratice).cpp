#include <iostream>
using namespace std;

//Q1.
void solveByXor(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i]; //1 ^ 1 ^ 2 ^ 2 ^ 3 ^ 3 ^ 7 = 7 ✅ (duplicates cancel, unique remains)
    }
    cout<<"unique number is:"<<ans<<endl;
}

//Q2.
void findPair(int brr[],int siz){
    for(int i=0;i<siz;i++){
        for(int j=0;j<siz;j++){
            cout<<'('<<brr[i]<<","<<brr[j]<<')'<<" ";
        }
        cout<<endl;
    }
}

//Q3.
void findTriplet(int crr[],int si){
    for(int i=0;i<si;i++){
        for(int j=0;j<si;j++){
            for(int k=0;k<si;k++){
                cout<<"("<<crr[i]<<","<<crr[j]<<","<<crr[k]<<")"<<" ";
            }
        }
        cout<<endl;
    }
}
int main() {
//Q1.find unique element whic is not repeat twice
    int arr[7];
    int size=7;
    solveByXor(arr,size);

//Q2.find the pairs of element
    int brr[3]={10,20,30};
    int siz=3;
    findPair(brr,siz);

//Q3.find a triplet pairs
    int crr[4]={1,2,3,4};
    int si=4;
    findTriplet(crr,si);
    return 0;
}