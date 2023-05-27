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



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        F(i,0,n)
        cin>>a[i];


        int ans = -1;

        for(int liar = 0; liar <= n; liar ++)
        {
            int lying = 0;

            for(int i = 0 ; i<n; i++)
            {
                if( a[i] > liar )
                {
                    lying++;
                }
            }

            if( lying == liar)
            {
                ans = liar;
                break;
            }
        }

        cout<<ans<<"\n";
    }

}



