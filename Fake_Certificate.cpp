//JAI SHREE RAM
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
         string s;
         cin>>s;
          int y =  count(s.begin(), s.end(), '1');
           int z =  count(s.begin(), s.end(), '0');
           if(z==1 || z==0){
            cout<<y+z<<"\n";
           }
           else{
          int m =1;
          int c = 0;
          for (int i = 0; i < n; i++)
          {
            if(s[i]=='0' && s[i+1]=='0'){
                m++;
            }
            else{
                
                c= max(m,c);
                
                m=1;
            }
          }
          cout<<y+c<<"\n";
           }
        
    }

 
}
