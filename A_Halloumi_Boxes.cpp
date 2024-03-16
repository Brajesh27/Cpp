// JAI SHREE RAM
#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            
        }
        bool k1 = false;
        for (int i = 0; i < n-1; i++)
        {
            
            if (arr[i] > arr[i + 1] && k == 1)
            {
               
                k1 = true;
                break;
            }
        }
        if (k1 == true)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << "\n";
    }
}