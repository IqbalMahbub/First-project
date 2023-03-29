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
    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    int kye;
    cin >> kye;
    cout << binariSearch(array, n, kye) << endl;
}