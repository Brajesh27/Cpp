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
        ll n;
        cin >> n;
        vector<int> v;
        int q;
        for (int i = 0; i < n; i++)
        {
            cin >> q;
            v.push_back(q);
        }
        int c = 0;
        sort(v.begin(), v.end());
        for (int j = v.size() - 1; j >= 1; j--)
        {
            int l1 = 0, r1 = j - 1;
            while (l1 < r1)
            {
            if (v[l1] + v[r1] > v[j] && (v[l1]!=0 && v[r1]!=0 && v[j]!=0)) {
                 
                    c += r1 - l1;
                    r1--;
			}
			else{

				l1++;
            }
            }
        }
        cout<<c<< "\n";
    }
}