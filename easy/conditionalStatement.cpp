/*

Question :
if and else are two of the most frequently used conditionals in C/C++, 
and they enable you to execute zero or one conditional statement among 
many such dependent conditional statements. We use them in the following ways:

*/

#include <iostream>

using namespace std;

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(n_temp); // String is converted to integer by stoi

    if (n == 1) {
        cout << "one";
    }
    else if (n == 2) {
        cout << "two";
    }
    else if (n == 3) {
        cout << "three";
    }
    else if (n == 4) {
        cout << "four";
    }
    else if (n == 5) {
        cout << "five";
    }
    else if (n == 6) {
        cout << "six";
    }
    else if (n == 7) {
        cout << "seven";
    }
    else if (n == 8) {
        cout << "eight";
    }
    else if (n == 9) {
        cout << "nine";
    }
    else {
        cout << "Greater than 9";
    }
    return 0;
}

