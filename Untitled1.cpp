#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int binaryNum[32];
    int count = 0;
    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[i];
        if (binaryNum[i] == 1)
            count++;
    }
    if (count % 2 == 0)
        cout << "even" << endl;
    else
    {
        cout << "odd" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

