#include <bits/stdc++.h>
using namespace std;
void reverse(int f, int arr[], int n)
{
    if (f >= n / 2)
    {
        return;
    }
    swap(arr[f], arr[n - f - 1]);
    reverse(f + 1, arr, n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i];
    }
    reverse(0, arr, n);
    cout << "reversed array wil be";
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i];
    }
    return 0;
}
