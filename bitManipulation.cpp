#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) a *a

#include <bits/stdc++.h>
using namespace std;
int getBit(int n, int pos)
{
    return (n & (1 << pos) != 0);
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int clearBit(int n, int pos)
{
    int A = ~(1<< pos);
    return (n & A);
}
int main()
{
    // getBit
    cout << getBit(8, 2) << endl;
    // setBit
    cout << setBit(8, 2) << endl;
    // clearBit
    cout << clearBit(5, 1) << endl;
}