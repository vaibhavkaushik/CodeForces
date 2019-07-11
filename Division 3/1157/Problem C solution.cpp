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
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    int prev = -1;
    int first = 0;
    int last = n-1;
    string sol;
    while(first <= last)
    {
        if(first == last)
        {
            if(arr[first] > prev)
            sol += 'R';
            break;
        }
        if(arr[first] < arr[last])
        {
            if(arr[first] > prev)
            {
                prev = arr[first++];
                sol += 'L';
            }
            else if(arr[last] > prev)
            {
                prev = arr[last--];
                sol += 'R';
            }
            else
            {
                break;
            }
        }
        else 
        {
            if(arr[last] > prev)
            {
                sol += 'R';
                prev = arr[last--];
            }
            else if(arr[first] > prev)
            {
                sol += 'L';
                prev = arr[first++];
            }
            else
            {
                break;
            }
        }
    }
    cout << sol.size() << endl;
    cout << sol;
    return 0;
}
