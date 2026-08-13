#include <bits/stdc++.h>
using namespace std;
void reverse(int n)
{
    int rev = 0;
    do
    {
        int lastdigit = n % 10;
        n = n / 10;
        // used for when the vale of n is very large or very small
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
        {
            return;
        }
        rev = (rev * 10) + lastdigit;
    } while (n > 0);
    cout << rev;
}
int main()
{
    int x;
    cin >> x;
    reverse(x);
}