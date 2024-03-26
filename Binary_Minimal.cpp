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
        string s;
        cin >> s;

        if (k == 0)
            cout << s;
        else
        {
            int z = count(s.begin(), s.end(), '0');
            if (z == n && n != 1)
            {
                if (k > n)
                {
                    cout << "0";
                }
                else
                    cout << s.substr(0, n - k);
            }
            else if (n == 1)
            {

                cout << "0";
            }
            else
            {
                int i = 0;
                while (k != 0 && n != 0)
                {
                    if (s[i] == '1')
                    {
                        s.erase(s.begin() + i);
                        k--;
                    }
                    i++;
                    n--;
                }
                if (k >= 0)
                {
                    if (s.size() == 1 || s.empty() == true)
                        cout << "0";
                }
                else
                {
                    cout<<s;
                }
            }
            // else{

            // }
        }
        cout << "\n";
    }
}