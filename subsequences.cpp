#include <bits/stdc++.h>
using namespace std;
#define int long long int

int arr1[26], arr2[26][26];
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("input.txt", "w", stdout);
#endif
    string S;
    cin >> S;
    for (int i = 0; i < S.length(); i++)
    {
        int c = S[i] - 'a';
        for (int j = 0; j < 26; j++)
            arr2[j][c] += arr1[j];
        arr1[c]++;
    }
    int ans = 0;
    for (int i = 0; i < 26; i++)
        ans = max(ans, arr1[i]);
    for (int i = 0; i < 26; i++)
        for (int j = 0; j < 26; j++)
            ans = max(ans, arr2[i][j]);
    cout << ans << endl;
    return 0;
}