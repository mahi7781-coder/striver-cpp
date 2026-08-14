// wap to print name n times
#include <bits/stdc++.h>
using namespace std;
void f(int i, int n)
{
    if (i > n)
    {
        return; // base condition for recurrsion to return the value
    }
    cout << "ashutosh" << endl;
    f(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    f(1, n);
}
