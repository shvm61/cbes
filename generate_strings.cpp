#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    freopen("input.txt", "w", stdout);
#endif
    int loop;
    cin >> loop;
    while (loop != -1)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        for (int i = 0; i < n; i++)
            cout << c;
        cin >> loop;
    }
    return 0;
}