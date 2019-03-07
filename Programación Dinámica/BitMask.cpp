#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum, res = 0, obj;
    cin >> n >> obj;
    int c[n];
    for (int i = 0; i < n; ++i) cin >> c[i];
    for (int mask = 0; mask <= (1<<n)-1; ++mask)
    {
        sum = 1;
        for (int i = 0; i < n; ++i)
            if (mask&(1<<i)) sum += c[i];
         if (sum == obj)
         {
            res++;
         }
    }
    cout << res << endl;

    return 0;
}
