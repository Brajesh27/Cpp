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
        ll n;
        cin>>n;
        int x =0;
        int j;
        for (int i = 0; i < n; i++){
        cin>>j;
        if(j==2){
            x++;
        }
                }
        if(x%8==0) cout<<"YES";
        else cout<<"NO";
        cout<<"\n"; 
    }

}