MOD = 1000000007
p = [1] * 200005
for i in range(1, 200005):
    p[i] = (p[i - 1] * 10) % MOD

sum = 0
n = int(input())
for i in range(1, n):
    res = 2 * 10 * 9 * p[n - i - 1]
    res += (n - 1 - i) * 10 * 9 * 9 * p[n - i - 2]
    sum = (sum+(res % MOD)) % MOD
print((sum+10) % MOD)
