#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	float x, y, z;
	cin >> x >> y >> z;
	float per = 0;
	
	float total_students = x*y;
	
	if(z == 0) cout << "NO";
	else if(z == total_students) cout << "YES";
	else{
	    float per = (z/total_students);
	    if(per > 0.5) cout<<"YES";
	    else cout << "NO";
	}

}


//Input: 3 12 23
//Output: YES

//Complexity: O(1)
