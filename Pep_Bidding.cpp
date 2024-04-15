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
        int aAttack=0, adefense=0, pAttack=0, pDefense=0;
        int j;
        for (int i = 0; i < n; i++)
        {
            cin >> j;
            aAttack += j;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> j;
            adefense += j;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> j;
            pAttack += j;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> j;
            pDefense += j;
        }
        // cout << aAttack << " " << adefense << " " << pAttack << " " << pDefense << " ";

        if(aAttack > pAttack && adefense > pDefense) cout<<"A";
        else if(pAttack > aAttack && pDefense > adefense) cout<<"P";
        else cout<<"DRAW";
        cout << "\n";
    }
}