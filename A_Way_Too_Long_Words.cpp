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
        string n;
        cin>>n;
        if(n.size()<=10) cout<<n<<"\n";
        else cout<<n[0]<<n.size()-2<<n[n.size()-1]<<"\n";
        
    }

}