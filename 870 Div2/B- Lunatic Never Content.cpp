#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n ; cin>>n;

        long long arr[n]={0};


        for(int i = 0 ; i<n;i++)
        {
           cin>>arr[i];
        }
        if( (count (arr,arr+n,0)) == n)
        {
            cout<<0<<"\n";
            continue;
        }

       long long  ans = INT_MIN;



      long long maximum = INT_MIN;
      long long minimum = INT_MAX;

      for(int i = 0 ;i<n;i++)
      {
          maximum = max(arr[i],maximum);
          minimum = min(arr[i],minimum);
      }
       long long i = 0 ,j = maximum;

     while(i < n && j >= 0 )
     {
         if( ( arr[i] % j ) == ( arr[n-1-i] %j ) )
         {
             i++;
             if(i > (n-1-i))
             {

                 ans = j;
             }
         }
         else{
            i = 0;
            j--;
         }

     }
     cout<<ans<<endl;




    }
}
