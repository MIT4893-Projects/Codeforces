//* 202607546	Apr/18/2023 20:07UTC+7	Minh4893IT	A - Counterexample	GNU C++17	Accepted	15 ms	0 KB

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ll l, r;
    cin >> l >> r;

    if (l % 2)
    {
        if (r < l + 3)
        {
            cout << -1;
            return 0;
        }

        cout << l + 1 << ' ' << l + 2 << ' ' << l + 3;
    }
    else
    {
        if (r < l + 2)
        {
            cout << -1;
            return 0;
        }

        cout << l << ' ' << l + 1 << ' ' << l + 2;
    }

    return 0;
}