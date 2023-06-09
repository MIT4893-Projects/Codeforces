//* 204142824	May/01/2023 21:06UTC+7	Minh4893IT	43B - Letter	GNU C++17	Accepted	30 ms	100 KB

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
    string heading;
    string text;

    GET(heading);
    GET(text);

    umap<char, int> headChars;
    for (auto c : heading)
        ++headChars[c];

    umap<int, int> textChars;
    for (auto c : text)
        ++textChars[c];

    for (auto p : textChars)
    {
        if (p.first == ' ')
            continue;
        if (headChars[p.first] < p.second)
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
