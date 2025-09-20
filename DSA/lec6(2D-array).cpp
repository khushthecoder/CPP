/*
📘 SUMMARY: 2D ARRAY IN C++

🔹 What is a 2D Array?
   → It's an array of arrays (rows x columns)
   → Think of it as a table or grid (like a chessboard)

🔹 Syntax:
   datatype arrayName[rows][columns];

🔹 Access:
   array[i][j] → i = row index, j = column index

🔹 Memory:
   → Stored in row-major order (row-wise memory layout)

🔹 Real-life Analogy:
   → A table of marks:
     Students (rows) x Subjects (columns)

🔹 Input Logic:
   Use nested loop:
   for each row → for each column → take input

🔹 Output Logic:
   Use nested loop:
   for each row → for each column → print element

🔹 Use Cases:
   ✅ Matrices
   ✅ Grids in games
   ✅ Image processing
   ✅ Graphs (adjacency matrix)
   ✅ DSA problems (matrix path, spiral, diagonal etc.)

🔹 Bonus:
   Use vector<vector<int>> for dynamic 2D array

-------------------------------------------
🧪 Example: Take input in 2D array and print it
→ Create 2D array of size 2x3 (2 rows, 3 columns)
→ Input: 6 numbers
→ Output: Print matrix format

EX-
------
int main() {
    int arr[2][3]; // 2 rows, 3 columns

    cout << "Enter 6 elements (2x3 matrix):" << endl;
    
    // Taking input
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is:" << endl;

    // Printing 2D array
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


*/



#include <iostream>
using namespace std;

void printArray(int arr[][4],int row,int col){ //atleast hame array me col ki size toh deni hi padegi
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printArrayinCOL(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    //making and print of 2 d array
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int row=3;
    int col=4;
    printArray(arr,row,col); // this print horizontally in terms of row
    printArrayinCOL(arr,row,col); //this print verical in terms of 
    
    //take input of row and col
    int brr[3][3];
    int r = 3, c = 3;

    // Taking input
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> brr[i][j];
        }
    }

    // Printing matrix
    cout << "You entered:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}