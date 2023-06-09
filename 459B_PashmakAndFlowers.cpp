//* 205193427	May/09/2023 14:16UTC+7	Minh4893IT	B - Pashmak and Flowers	GNU C++14	Accepted	171 ms	8100 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define vec vector
#define pq priority_queue

#define LLMAX INT64_MAX

#define in cin
#define out cout
#define input in
#define print out
#define GET(var) getline(cin, var)

#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define FORIR(i, a, n) for (int i = a; i < n; i++)
#define FORI(i, n) FORIR(i, 0, n)
#define FORR(a, n) FORIR(i, a, n)
#define FOR(n) FORIR(i, 0, n)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
template <class T>
void OFILE(T finp, T fout)
{
    freopen(finp, "r", stdin), freopen(fout, "w", stdout);
}

void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    int ma = 0;
    int mi = 1e10;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        ++m[temp];
        ma = max(ma, temp);
        mi = min(mi, temp);
    }

    if (ma != mi)
        cout << ma - mi << ' ' << m[ma] * m[mi];
    else
        cout << 0 << ' ' << m[ma] * (m[ma] - 1) / 2;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
