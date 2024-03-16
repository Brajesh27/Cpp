#include <bits/stdc++.h>
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
        ll n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int Alice = 0;
        int Bob = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                Bob++;
            }
            else
            {
                Alice++;
                int temp = Alice;
                Alice = Bob;
                Bob = temp;
            }
        }
          cout << "Alice: " << Alice << ", Bob: " << Bob << "\n";
    }

    return 0;
}
