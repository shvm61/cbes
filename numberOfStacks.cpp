#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define MOD 1000000007
void test()
{
    int n;
    cin >> n;
    vector<int> v(200005, 1);
    int sum = 0;
    for (int i = 1; i < 200005; i++)
        v[i] = (v[i - 1] * 10) % MOD;
    for (int i = 1; i < n; i++)
    {
        int res = 2 * 10 * 9 * v[n - i - 1];
        res += (n - 1 - i) * 10 * 9 * 9 * v[n - i - 2];
        sum = (sum + res % MOD) % MOD;
    }
    cout << (sum + 10) % MOD << endl;
}
int32_t main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        test();
    }
    return 0;
}