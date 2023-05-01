//* 204101155	May/01/2023 10:31UTC+7	Minh4893IT	B - Inbox (100500)	GNU C++17	Accepted	15 ms	100 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define uset unordered_set
#define umap unordered_map

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

    vector<pair<int, int>> unreads;

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        if (temp)
            unreads.push_back(pair<int, int>(temp, i));
    }

    int result = 0;
    for (int i = 0; i < unreads.size(); ++i)
    {
        ++result;
        result += i < unreads.size() - 1 && unreads[i + 1].second > unreads[i].second + 1;
    }

    cout << result;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
