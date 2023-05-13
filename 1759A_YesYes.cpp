//* 202136905	Apr/15/2023 08:28UTC+7	Minh4893IT	A - Yes-Yes?	GNU C++17	Accepted	15 ms	100 KB

#include <bits/stdc++.h>
using namespace std;
int i = 0;
void solve()
{
    string s;
    cin >> s;

    string comp = "Yes";
    int idx = 0;
    if (s[0] == 'e')
        idx = 1;
    else if (s[0] == 's')
        idx = 2;

    for (auto c : s)
    {
        if (c != comp[idx])
        {
            cout << "NO\n";
            return;
        }

        idx = (idx + 1) % 3;
    }

    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}