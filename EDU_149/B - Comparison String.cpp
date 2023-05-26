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

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for (int i = 0, j; i < n; i = j) {
      for (j = i; j < n and s[i] == s[j]; j++);
      ans = max(ans, j - i + 1);
    //  cout<<"i"<<" "<<i<<" "<<" j "<< "  "<< j<<endl;
    }
    cout << ans << '\n';
  }
  return 0;


}

/*

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;



        int ans = 0;
        int cost = 1;
        int i = 0, j = 0;

        while( i < n && j<= n)
        {



            if( s [i] == s[j])
            {
                j++;
                cost ++;
            }
            else
            {
                i = j ;
                ans = max(ans, cost );
                cost = 1;

            }


        }


        cout << ans << '\n';




    }
    return 0;


}
/


