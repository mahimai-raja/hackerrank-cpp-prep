/*

Task:
To print each value in next line.
Input consists of the following space-separated values: int, long, char, float, and double, respectively.
211916801 97592151379235457 p 19856.992 -5279235.721231465
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl << b << endl << c << endl ;
    printf("%f", d);
    printf("\n%f", e);
    
    return 0;
}
