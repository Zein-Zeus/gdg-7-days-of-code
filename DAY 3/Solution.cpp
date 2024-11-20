#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    for(int i = a; i<=b; i++){
        if(i%5 == 0){
            if(i%7 == 0){
                cout << "FooBar" << endl;
            }
            else {
                cout << "Foo" << endl;
            }
        }
        else {
            if(i%7 == 0){
                cout << "Bar" << endl;
            }
            else {
                cout << "Baz" << endl;
            }
        }
    }

    return 0;
}

//Input: 5 10
//Output: 
// Foo
// Baz
// Bar
// Baz
// Baz
// Foo

//Complexity: O(n)
