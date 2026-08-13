#include <bits/stdc++.h>
using namespace std;
// only valid for 3 digits integer
bool isarmstrong(int n)
{
    int dup = n;
    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
        n = n / 10;
    }
    if (sum == dup)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
int main()
{
    int x;
    cin >> x;
    isarmstrong(x);
    return 0;
}