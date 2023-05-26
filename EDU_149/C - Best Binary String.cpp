/* Note:
  #  if we just replace the question mark ( '?' ) with the previous char then it will be ok.
  #  if '?' located int i = 0 position simply s[i] = '0';
          because the string must be in non-descending order.

*/

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

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

    ll t,CT=0;
    cin>>t;

    while(t--)
    {

        string s;
        cin>>s;
      int n = s.size();

      for(int i = 0; i<n;i++)
      {
          if( s[i]=='?'  )   // We find any '? ' char 
          {
              if (i == 0 )
              {
                  s[i]='0';   // if it is in first position then ? replaced with 0
              }
              else{
                     s[i] = s[i-1];  // or if position is > 0 then '?' will replaced with the previous char.
              }

          }

      }

      cout<<s<<endl; // printing the string



    }


}
