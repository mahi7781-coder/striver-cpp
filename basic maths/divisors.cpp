#include <bits/stdc++.h>
using namespace std;
void divisors(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
        if (n / i != 1)
        {
            cout << n / i << " ";
        }
    }
}
int main()
{
    int x;
    cin >> x;
    divisors(x);
    return 0;
}