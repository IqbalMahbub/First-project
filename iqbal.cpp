
#include <bits/stdc++.h>
using namespace std;
void solve(int num)
{
    int known = 0, unknown = 0, ans = 0;
    int b;
    for (int i = 0; i < num; i++)
    {
        cin >> b;
        if (b == 2)
        {
            known = known + unknown;
            unknown = 0;
            ans = max(ans, (known + 2) / 2);
        }
        else
        {
            unknown++;
            ans = max(ans, ((known + 1) / 2) + unknown);
        }
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        solve(k);
    }
}
