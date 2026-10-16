#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    // Read the number of stoves (X) and minutes (Y)
    cin >> x >> y;
    
    // Calculate and print the maximum number of customers
    cout << (x * y) << "\n";
    
    return 0;
}