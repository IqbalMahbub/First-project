#include <iostream>
using namespace std;

void decToBinary(int t1, int n)
{
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

        if (binaryNum[j] == 1)
        {
            count++;
        }
    }

    if (count % 2 == 0)
        cout << "Case"
             << " " << t1 << ": even" << endl;
    else
    {
        cout << "Case"
             << " " << t1 << ": odd" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    int t1 = 0;
    while (t--)
    {
        int n;
        cin >> n;
        t1++;
        decToBinary(t1, n);
    }

    return 0;
}
