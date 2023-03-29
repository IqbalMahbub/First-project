#include <bits/stdc++.h>
using namespace std;

bool digit(int num)
{
    int x=num;
    int di;
    int count1=0;
    int count2=0;
    while (x>0)
    {

        di = x % 10;
        x = x/10;
        count2++;

        if (di== 4||di==7){
                count1++;
        }


    }
    if(count1==count2)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0||n%47)
    {
        cout << "YES";
        return 0;

    }

  if (digit(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
