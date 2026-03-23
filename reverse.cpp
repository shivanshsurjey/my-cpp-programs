#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, ;

    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
               // extract last digit
        reversed = reversed * 10 + (num%10); // build reversed number
        num /= 10;                    // remove last digit
    }

    cout << "Reversed number: " << reversed << endl;
    return 0;
}