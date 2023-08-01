//* 216713506	Aug/01/2023 20:07UTC+7	Minh4893IT	A - Dima and Friends	GNU C++14	Accepted	30 ms	0 KB

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

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        sum += val;
    }

    int result = 0;
    for (int i = 1; i <= 5; ++i)
        result += (sum + i) % (n + 1) != 1;

    cout << result << endl;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
