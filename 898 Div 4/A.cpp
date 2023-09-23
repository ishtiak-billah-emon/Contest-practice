#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
    	string s; cin >> s;

    	if(s == "abc" || s == "acb" || s == "bac" || s == "cba"){
    		cout << "YES\n";
    	}else{
    		cout << "NO\n";
    	}
    }

    return 0;
}		