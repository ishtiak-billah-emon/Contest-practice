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

    ll t;
    cin>>t;

    while(t--)
    {

        int x ,k;
        cin>>x>>k;
        if((x %k == 0 )|| x==k)
        {
            if((x-1)%k!=0)
            {
                cout<<"2"<<endl;
                cout<<(x-1)<<" "<<"1"<<endl;
            }
        }
        else if( x%k!=0 || (x< k ))
        {
            cout<<"1"<<endl;
            cout<<x<<endl;

        }

    }


}
