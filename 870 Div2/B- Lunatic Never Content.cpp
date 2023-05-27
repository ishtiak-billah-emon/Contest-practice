#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n ; cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin >> ar[i];

        int ans=0;
        for(int i=0;i<n;i++)
            ans=__gcd(ans,abs(ar[i]-ar[n-1-i]));

        cout << ans << "\n";

    }
}
