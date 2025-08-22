#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    // Loop for rows
    for (int i = 1; i <= n; i++) 
    { 
        // Loop for stars      
        for (int j = 1; j <= i; j++)
        {   
            cout << "* ";
        }
        cout << endl; // Move to next line
    }

    return 0;
}
