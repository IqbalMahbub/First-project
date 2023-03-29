#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], ma[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
        ma[a[i]] = i + 1;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        if (x == ma[n - 1])
            swap(ma[n - 1], ma[n - 2]);
        else
        {
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}