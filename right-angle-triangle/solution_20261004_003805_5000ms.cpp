#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Loop for each row
    for(int i = 1; i <= n; i++) {
        // Loop to print '*' followed by a space for each column in the current row
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}