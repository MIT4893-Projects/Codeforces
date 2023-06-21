//* 210120894	Jun/18/2023 21:49UTC+7	Minh4893IT	1836A - Destroyer	GNU C++17	Accepted	15 ms	100 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define pq priority_queue
#define endl "\n"

#define LLMAX INT64_MAX
#define GET(var) getline(cin, var)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()

void solve()
{
    int n;
    cin >> n;

    map<int, int> count;
    int ma = 0;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        ++count[val];
        ma = max(ma, val);
    }

    if (ma == 0)
    {
        cout << "YES" << endl;
        return;
    }

    if (ma + 1 != count.size())
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 1; i <= ma; ++i)
        if (count[i] > count[i-1])
        {
            cout << "NO" << endl;
            return;
        }

    cout << "YES" << endl;
}

signed main()
{
    FAST_IO;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
