//* 202321409	Apr/16/2023 11:01UTC+7	Minh4893IT	A - Bad Ugly Numbers	GNU C++17	Accepted	31 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << "-1\n";
    else
    {
        for (int i = 1; i < n; ++i)
            cout << "7";
        cout << "8\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();
}