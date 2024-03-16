//JAI SHREE RAM
#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
bool longattheend = false;

int Substring(const std::string& s) {
    int ans = 1, temp = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            ++temp;
        } else {
            ans = std::max(ans, temp);
            temp = 1;
        }
    }

    if (ans < temp) {
        ans = std::max(ans, temp);
        longattheend = true;
    }

    return ans;
}


int longest(const std::string& s) {
    int n = s.size() - 1;
    int res = 1;

    while (n > 0 && s[n] == s[n - 1]) {
        res++;
        n--;
    }
    
    return res;
}

 
int main() {
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,q;
        cin>>n>>q;
        string s;cin>>s;
        int res = Substring(s);
        int ans=0;
        if(longattheend==false){
            ans=longest(s);
        }
        cout<<max(res,ans)<<" ";
        char a = s[n-1];
        while(q--){
          char a1;
          cin>>a1;
          if(a1==a) ans++;
          cout<<max(ans,res)<<" ";
          if(a1!=a){
            a=a1;
            ans=1;
          }
        }
        
        cout<<"\n"; 
    }

}