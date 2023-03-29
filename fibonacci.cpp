#include <bits/stdc++.h>
using namespace std;
void fib(int num)
{
   double t1=0,t2=1;
  double nextTerm;
    for(int i=0;i<num;i++)
    {
        cout<<t1<<" ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;

    }
}
int main()
{
    int a;
    cin>>a;
    fib(a);
    return 0;
}
