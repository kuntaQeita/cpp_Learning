#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {       // Loop for rows
        for (int j = 1; j <= i; j++) {   // Loop for stars
            cout << "* ";
        }
        cout << endl; // Move to next line
    }

    return 0;
}
