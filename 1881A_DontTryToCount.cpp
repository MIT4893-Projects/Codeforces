//* 228326193	Oct/16/2023 00:03UTC+7	Minh4893IT	A - Don't Try to Count	GNU C++14	Accepted	61 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    for (int i = 0; i < 6; ++i)
    {
        if (x.find(s) != string::npos)
        {
            cout << i << endl;
            return;
        }

        x += x;
    }

    cout << -1 << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
