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
        string a,b,c;
        cin>>a>>b>>c;
        int d = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]!=c[i] && b[i]!=c[i]){
                d++;
                continue;
            }
        }
        if(d!=0)
            cout<<"YES";
        else 
            cout<<"NO";
    
    cout<<"\n";
      
    }

}