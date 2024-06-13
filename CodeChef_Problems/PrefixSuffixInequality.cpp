// problem link
// https://www.codechef.com/problems/PREFSUFF


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	int t;

	cin >> t;

	while(t--){

	    int n;

	    cin >> n;

	    if(n >= 3){
	        while(n >= 3){
	            cout << 5 << " ";
	            n--;
	        }

	        cout << 6 << " " << 3 << endl;
	    }else if(n == 2){
	        cout << 6 << " " << 3 << endl;
	    }else{
	        cout << 3 << endl;
	    }
	}

}
