#include <bits/stdc++.h>
using namespace std;
void pallindrome(int n)
{
    int dup = n;
    int rev = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        rev = (rev * 10) + lastdigit;
    }
    if (dup == rev)
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
    pallindrome(x);
}