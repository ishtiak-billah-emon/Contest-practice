#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; 	cin >> t;   
	while(t--) {
		int n; cin >> n;
		int a[n + 1];

		for(int  i = 1; i <= n; i++){
			cin >> a[i];   
		}

		int mini =  10;
		for(int i = 1; i <= n; i++){
			mini = min(a[i],mini);
		}
		
		int index = -1;

		for(int i = 1; i <= n; i++) {
			if(a[i] == mini){
				index = i;
				break;
			}
		}

		a[index]++;

		long long int ans = 1;

		for(int i = 1; i <= n; i++) {

			ans *= a[i]; 
		}

		cout << ans << '\n';
	}



    return 0;
}		