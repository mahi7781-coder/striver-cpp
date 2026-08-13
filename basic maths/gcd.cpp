#include <bits/stdc++.h>
using namespace std;
void gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
        if (a == 0)
        {
            cout << b;
        }
        if (b == 0)
        {
            cout << a;
        }
    }
}
int main()
{
    int x, y;
    cin >> x >> y;
    gcd(x, y);
}