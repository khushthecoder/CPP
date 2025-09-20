#include <iostream>
using namespace std;

//Q3.i use function
void countfunction(int crr[],int size){
    int c=0;
    for(int i=0;i<size;i++){
        if(crr[i]==0 || crr[i]==1){
            c+=1;
        }
    }
    cout<<"count of 0's and 1's are:"<<c;
}


//Q4. i use function to solve 
void findReverse(int drr[],int si){
    int c[4];
    for(int i=si;i>=0;i--){
        c[i]=drr[i];
    }
    cout<<"reverse array is:";
    for(int i=si;i>=0;i--){
        cout<<c[i]<<" ";
    }
}

//Q5.using function
void reverseArrayBySwap(int err[], int s) {
    // 🔁 Two pointers: left shuru se, right end se
    int left = 0;
    int right = s - 1;
    
    // 🔁 Jab tak left index right se chhota ya equal ho, tab tak swap karte raho
    while (left <= right) {
        // 🔄 left aur right index ke elements ko swap karo
        swap(err[left], err[right]);

        // ⬅️➡️ Pointer ko aage badhao
        left++;   // left ko ek aage le jao
        right--;  // right ko ek peeche le jao
    }

    // 🖨️ Reversed array ko print karo
    for (int i = 0; i < s; i++) {
        cout << err[i] << " ";
    }

    // 📌 Note:
    // ✅ Ye method odd aur even dono size ke arrays ke liye kaam karta hai
    // ✅ Kyunki hum while loop me "left <= right" tak chala rahe hain
}

//Q6.
void extremeArray(int frr[],int length){
    int left=0;
    int right=length-1;
    while(left<=right){
        if(left==right){
        cout<<frr[left]<<" ";
        }
        else{
            cout<<frr[left]<<" ";
            cout<<frr[right]<<" ";
        }
        left++;
        right--;
    }
}


int main() {
//Q1.Write a program to take input for 10 elements in an array, then double each element's value and display the updated array.
    //Create an array of size 10.
    int arr[10];
    int n=10;
    //Take input from the user for all elements of the array.
    for(int i=0;i<n;i++){
        cin>>arr[i];
        //Double each value of that array and store or print the updated values.
        cout<<arr[i]*2<<" ";
    }
    cout<<endl;


//Q2.wite a program to take input for 5 element in an array,then find the sum of array
    int brr[5];
    int sum=0;
    for (int i=0;i<5;i++){
        cin>>brr[i];
        sum+=brr[i];
    }
    cout<<sum<<endl;


//Q3.count 0's and 1's in an array
    int crr[5]={0,1,1,0,0};
    int size=5;
    countfunction(crr,size);
    cout<<endl;


//Q4. reverse an array
    int drr[4]={10,20,30,40};
    int si=3;
    findReverse(drr,si);
    cout<<endl;


//Q5.this is mwthod 2 for Q4 using swaping method
    int err[5]={10,20,30,40,50};
    int s=5;
    reverseArrayBySwap(err,s);
    cout<<endl;

//Q6.extreme print in an array-->first element, last element, second element, second last element, and so on…
    int frr[6]={10,20,30,40,50,60};
    int length=6;
    extremeArray(frr,length);
    return 0;
}

