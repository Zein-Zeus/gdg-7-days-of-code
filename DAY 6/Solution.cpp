#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 0;
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for (char c : s) {
        if (vowels.count(c)) { //Checks whether 'c' is present in set 'vowels'
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

//Input: Hello World #2024
//Output: 3

//Complexity: O(n) where, n = length of string
