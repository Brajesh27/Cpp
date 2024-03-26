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
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++){
        cin>>arr[i];
                }
                int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == i + 1) { 
            count++;
            i++;
        }
    }
        cout<<count<<"\n"; 
    }

}