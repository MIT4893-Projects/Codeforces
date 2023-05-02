//* 201442579	Apr/09/2023 16:00UTC+7	Minh4893IT	A - Parallel Projection	GNU C++17	Accepted	31 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int w, d, h;
    cin >> w >> d >> h;

    int a, b, f, g;
    cin >> a >> b >> f >> g;

    int ans = b + abs(a - f) + g;
    ans = min(ans, a + abs(b - g) + f);
    ans = min(ans, (d - b) + abs(a - f) + (d - g));
    ans = min(ans, (w - a) + abs(b - g) + (w - f));
    cout << ans + h << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}