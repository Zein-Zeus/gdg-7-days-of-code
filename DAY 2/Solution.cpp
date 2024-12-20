#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<n-i; j++){
            cout << " ";
        }
        for(int j = 0; j<i*2-1; j++){
            cout << "*";
        }
        //Optional
        for(int j = 0; j<n-i; j++){
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}

//Input: 4
//Output: 
//    *   
//   ***  
//  ***** 
// *******

//Complexity: O(n^2)
