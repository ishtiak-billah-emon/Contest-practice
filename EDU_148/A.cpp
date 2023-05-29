
#include <bits/stdc++.h>
using namespace std;

#define lln long long int
#define ld long double
#define endl "\n";
#define sc(n) scanf("%d",&n);
#define scl(n) scanf("%lld",&n);
#define scd(n) scanf("%lf",&n);
#define pf(res) printf("%d\n",res);
#define pfl(res) printf("%lld\n",res);
#define pfd(res) printf("%lf\n",res);
#define f(i,a,b) for(int i=a; i <= b;i++)
#define F(i,a,b) for(int i=a; i < b;i++)


int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {

       string st;
       cin>>st;

        set<char>s;

        for(int i  = 0 ; i< st.size()/2;i++)
        {
            s.insert(st[i]);
        }

        if(s.size() > 1)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }

}
