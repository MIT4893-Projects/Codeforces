#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    if (s == "^")
    {
        cout << "1\n";
        return;
    }
    if (s == "_")
    {
        cout << "2\n";
        return;
    }
    if (s == "^_" || s == "_^")
    {
        cout << "1\n";
        return;
    }

    int result = s[0] == '_';
    result += s[s.length() - 1] == '_';
    for (int i = 1; i < s.length(); ++i)
        if (s[i] == '_' && s[i - 1] == '_')
            ++result;
    
    cout << result << "\n";
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