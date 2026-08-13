#include <bits/stdc++.h>
using namespace std;
void reverse(int n)
{
    int sum = 0;
    while (n > 0 && n != 0)
    {
        int a = n / 100;
        int b = (n % 100) / 10;
        int c = n % 10;
        sum = c * 100 + b * 10 + a;
        cout << "reversed number is";
        cout << sum;
        break;
    }
}
int main()
{
    int z;
    cin >> z;
    reverse(z);
    return 0;
}