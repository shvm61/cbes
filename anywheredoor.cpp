#include <bits/stdc++.h>
using namespace std;
#define int long long int

int d[61][200005];

int32_t main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    for (size_t i = 1; i <= n; i++)
    {
        cin >> d[0][i];
        cout<<i<<" "<<d[0][i]<<endl;
    }

    for (size_t i = 1; i < 61; i++)
    {
        for (size_t j = 1; j <= n; j++)
        {
            d[i][j] = d[i - 1][d[i - 1][j]];
        }
    }
    int ans = 1;
    for (size_t i = 0; i < 61; i++)
    {
        if (k & (1LL << i))
        {
            ans = d[i][ans];
        }
    }
    cout << ans << endl;
}