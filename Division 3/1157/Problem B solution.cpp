#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    string arr;
    cin >> arr;
    char mp[11];
    for (int i = 1; i < 10; i++)
    {
        cin >> mp[i];
    }
    string sol = arr;
    int first = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mp[arr[i] - '0'])
        {
            first = i;
            break;
        }
    }
    if (first == -1)
    {
        cout << arr;
        return 0;
    }
    for (int i = first; i < n; i++)
    {
        if (arr[i] <= mp[arr[i] - '0'])
        {
            arr[i] = mp[arr[i]-'0'];
        }
        else
        {
            break;
        }
    }
    cout << max(sol, arr);
    return 0;
}
