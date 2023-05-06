//* 204705225	May/06/2023 14:35UTC+7	Minh4893IT	B - Text Document Analysis	GNU C++14	Accepted	15 ms	0 KB

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

bool comp(char a, char b)
{
    return a == b && a == '_';
}

void solve()
{
    string line;
    GET(line);
    GET(line);

    line = string(line.begin(), unique(line.begin(), line.end(), comp)) + '_';

    stack<bool> sta;
    int wordInParent = 0;
    int longestWord = 0;
    int currLen = 0;
    for (int i = 0; i < line.length(); ++i)
    {
        if (line[i] == '(')
        {
            if (sta.empty())
                longestWord = max(longestWord, currLen);
            sta.push(true);
            currLen = 0;
            continue;
        }
        if (line[i] == ')')
        {
            sta.pop();
            wordInParent += i > 0 && isalpha(line[i - 1]);
            currLen = 0;
            continue;
        }

        if (line[i] == '_' && sta.size())
        {
            wordInParent += i > 0 && isalpha(line[i - 1]);
            currLen = 0;
            continue;
        }
        if (line[i] == '_' && sta.empty())
        {
            longestWord = max(longestWord, currLen);
            currLen = 0;
            continue;
        }

        ++currLen;
    }

    cout << longestWord << ' ' << wordInParent;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
