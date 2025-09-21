#include <iostream>
using namespace std;

/*
Question.
Write a program that takes a non-negative integer n as input and 
prints each of its digits in words, in the same order as they appear 
in the number.
Input:412
output:four one two
*/

//CODE
void printDigitsInWords(int n) {
    string words[] = {"zero", "one", "two", "three", "four",
                      "five", "six", "seven", "eight", "nine"};
    if (n == 0)
        return;
    printDigitsInWords(n / 10);
    cout << words[n % 10] << " ";
}
int main() {
    int n;
    cin >> n;
    
    if (n == 0)
        cout << "zero ";
    else
        printDigitsInWords(n);
}

/*
//code in PYTHON
def print_digits_in_words(n):
    words = ["zero", "one", "two", "three", "four", 
             "five", "six", "seven", "eight", "nine"]
    if n == 0:
        return
    print_digits_in_words(n // 10)
    print(words[n % 10], end=" ")
n = int(input())
if n == 0:
    print("zero", end=" ")
else:
    print_digits_in_words(n)

*/
