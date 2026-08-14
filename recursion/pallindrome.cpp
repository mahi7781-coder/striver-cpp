#include <bits/stdc++.h>
using namespace std;
bool ispallindrome(string &s, int n)
{
    if (n >= s.size() / 2)
    {
        return true;
    }
    if (s[n] != s[s.size() - n - 1])
    {
        return false;
    }
    else
    {
        return ispallindrome(s, n + 1);
    }
}
int main()
{
    string s;
    cin >> s;
    cout << ispallindrome(s, 0);
    return 0;
}