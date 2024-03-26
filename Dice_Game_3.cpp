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
        if(n==1){
            cout<<"6";
        }
        else{
            int res = n/2;
            res*=13;
            if(n%2!=0){
                res+=6;
            }
            cout<<res;
        }
        cout<<"\n"; 
    }

}