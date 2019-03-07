#include <bits/stdc++.h>
using namespace std;
typedef long long ui64;
const ui64 mod = 1000000007;
ui64 b_pow(ui64 a, ui64 b, ui64 m);
int main()
{
    ui64 n, e;
    while (cin >> n >> e && n != 0)
    {
        cout << b_pow(n, e, mod) << endl;
    }
    return 0;
}

/// Exponente - Base
ui64 b_pow(ui64 a, ui64 b, ui64 mod)
{
    ui64 res = 1;
    while(b > 0)
    {
        if((b&1) == 1) res=(a*res)%mod;
        b >>= 1;
        a = ((a%mod)*(a%mod))%mod;
    }
    return res;
}
