#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int n;
    cout << "enter the numbers";
    cin >> n;
    do
    {
        count++;
        n = n / 10;
    } while (n > 0);
    cout << "total no are " << count;
    // or we can use
    int cnt = (int)(log10(n) + 1);
    cin >> cnt;
    return 0;
}