// problem link
// https://codeforces.com/problemset/problem/1385/A


#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;

        vector<int> arr(3);

        arr[0] = x;
        arr[1] = y;
        arr[2] = z;
        sort(arr.begin(), arr.end());
        // cout << t << ":-";



        // cout << endl;
        
        if(arr[2] == arr[1]){
            cout << "YES\n";
        //     for(int i = 0; i <3;i++){
        //     cout << arr[i] << " ";
        // }

        cout << arr[0] << " " << arr[0] << " " << arr[2];
        }else{
            cout << "NO";
        }

        cout << endl;
    }
}
