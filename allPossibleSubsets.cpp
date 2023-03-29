#include <bits/stdc++.h>
using namespace std;
void subset(int arr[],int n)
{
    int m=pow(2,n);

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&1<<j)
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }

}
int main()
{
    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    subset(ar,n);
}
