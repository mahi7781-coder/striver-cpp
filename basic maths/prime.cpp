#include <bits/stdc++.h>
using namespace std;
void prime(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0 && n / i != i)
        {
            cnt++;
        }
    }
    if (cnt > 2)
    {
        cout << "non prime";
    }
    else
    {
        cout << "is prime";
    }
}
int main()
{
    int x;
    cin >> x;
    prime(x);
}