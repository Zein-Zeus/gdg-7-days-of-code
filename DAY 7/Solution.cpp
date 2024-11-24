#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int row[n] = {0}; //Mark rows to be zeroed
    int col[m] = {0}; //Mark columns to be zeroed

    //Step 1: Mark rows and columns to be zeroed
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    //Step 2: Set matrix elements to 0 based on the markings
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] == 1 || col[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }

    //Print
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

//Input: 
// 3 3
// 1 2 3
// 4 0 6
// 7 8 9

//Output: 
// 1 0 3
// 0 0 0
// 7 0 9

//Visualization:
//Step 1: [zero-based indexing]
//before marking: row = [0, 0, 0], col = [0, 0, 0]
//after marking: row = [0, 1, 0], col = [0, 1, 0] {matrix[1][1] = 0}
//Step 2: changes every element with row number 1 and column number 1 to '0'

//Complexity: O(n*m)
