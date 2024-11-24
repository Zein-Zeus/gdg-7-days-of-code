#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0; 
    cin >> n;

    if (n <= 0) {
        cout << 0 << endl; // Edge case: if n is zero or negative
        return 0;
    }

    vector<int> a(n); // Use a vector for dynamic size
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) sum += a[i]; // Sum only positive integers
    }
    cout << sum << endl;
    return 0;
}

//Input: 
// 5
// -12 -5 60 23 -8
//Output: 83

//Complexity: O(n)
