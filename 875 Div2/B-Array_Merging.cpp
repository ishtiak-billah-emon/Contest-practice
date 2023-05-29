#include <bits/stdc++.h>
using namespace std;

#define lln long long int
#define ld long double
#define ll long long
#define endl "\n";
#define sc(n) scanf("%d",&n);
#define scl(n) scanf("%lld",&n);
#define scd(n) scanf("%lf",&n);
#define pf(res) printf("%d\n",res);
#define pfl(res) printf("%lld\n",res);
#define pfd(res) printf("%lf\n",res);
#define f(i,a,b) for(int i=a; i <= b;i++)
#define F(i,a,b) for(int i=a; i < b;i++)
const ll mod = 1e9+7;



void solve() {

}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

  int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll a[n];
        ll b[n];

        for(ll i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i = 0 ;  i<n;i++)
        {
            cin>>b[i];
        }



        ll cnt1[2 * n + 1]= {0};
        ll cnt2[2 * n + 1]= {0};


        for (ll i = 0, j; i < n; i = j) {
          for (j = i; j < n and a[i] == a[j]; j++);
             cnt1[a[i]] = max(cnt1[a[i]], j - i );

        }

        for (ll i = 0, j; i < n; i = j) {
          for (j = i; j < n and b[i] == b[j]; j++);
             cnt2[b[i]] = max(cnt2[b[i]], j - i );

        }
        ll ans = 0;

        for(ll i = 0 ; i<= 2*n; i++)
        {
            ans = max( ans , cnt1[i] + cnt2[i]);
        }
        cout<<ans<<endl;

    }


}
