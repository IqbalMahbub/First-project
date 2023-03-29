#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        set<int> s1, s2;
        cin >> x >> y;
        for (int i = 0; i < x; i++)
        {
            s1.insert(a[i]);
        }
        for (int i = 0; i < y; i++)
        {
            s2.insert(b[i]);
        }
        if (s1 == s2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}