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
    int n;cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){


        if(i%4==0||i%7==0||digit(i)){
            if(n%i==0)
              {
                  cout<<"YES";
                  count=1;
                  break;
              }
        }
    }
    if(count!=1)
    cout<<"NO";
    return 0;
}
