#include <bits/stdc++.h>
using namespace std;
int binariSearch(int array[], int n, int kye)
{
    int start = 0, end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (array[mid] == kye)
        {
            return mid;
        }
        else if (array[mid] > kye)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        a[i] = i + 1;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (x == a[0])
            swap(a[0], a[1]);
        else if (x == a[n - 1])
            swap(a[n - 1], a[n - 2]);
        else
        {
            int j = binariSearch(a, n, x);
            if (j != -1)
                swap(a[j], a[j + 1]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
