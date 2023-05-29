/*

we have n numbers and we have to do k operations.
during each operations we can do EXACTLY one of the following task
1)find two minimum elements in the array, and delete them;
2)find the maximum element in the array, and delete it

Task: Find the maximum possible sum of the resulting array

1) do prefix sum ,store the sum of previous value in the index
2) for 0 to k find all the pair
left pair will be 2*x
right pair will be k-x

subtracting right array to left will be a ans
find the maximum value of ans.


*/

#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
long long a[N];
int  main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    sort(a + 1, a + n + 1);

    // prefix sum

    for (int i = 1; i <= n; i++) {
      a[i] += a[i - 1];
    }

   long long ans = 0;

    for (int i = 0; i <= k; i++) {
      int l = 2 * i, r = n - (k - i);
      ans = max(ans, a[r] - a[l]);
    }
    cout << ans << '\n';
 }
 return 0;
}
