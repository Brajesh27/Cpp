//JAI SHREE RAM
#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main() {
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll s = (n*(n-1))/2;
        if(k==0) cout<<n;// no bridges detroyed
        else if(k>=n-1 || s==k) cout<<"1";// all bridges destroyed
        else {
            cout<<n;
        }
        // else{
        //   ll t = s-k;
        //   if(k>=n) cout<<"1";// if there are sufficient bridges for each island
        // //   else cout<<t;
        // }
        cout<<"\n"; 
    }

}
