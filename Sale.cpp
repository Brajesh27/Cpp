// //JAI SHREE RAM
// #include "bits/stdc++.h"
// using namespace std;
// typedef long long int ll;
// int main() {
//  ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//     ll t;
//     cin>>t;
//     while (t--)
//     {
//         ll n;
//         cin>>n;
//         ll arr[n];
//         ll TotalSum =0;
//         for(int i =0;i<n;i++){
//          cin>>arr[i];
//          TotalSum+=arr[i];
//         }
//         TotalSum+=arr[n-1];
//         ll TillMaxSum = 0;
//         ll maxIndex =-1;
//         for(int i =0;i<n;i++){
//             if(arr[i]>=TillMaxSum){
//                     TillMaxSum=arr[i];
//                     maxIndex=i;
//             }
//         }
//         ll MaxSum =0;
//         for(int j =0;j<maxIndex;j++){
//             MaxSum+=arr[j];

//         }
//         MaxSum+=2*arr[maxIndex];

// //there is gap between maxsum and totalsum what if there is a chance that sum of the numbers greather than totalsum and maxsum.to do that add
// //make a sum =0 if the sum+=2*arr[i]>total sum && sum+=2*arr[i]>maxsum then return it else return max(totalsum,maximumsum)
// ll sum =0;
// bool t =false;
// for (int i = 0; i < n; i++)
// {
//     /* code */
//     sum+=2*arr[i];
//     if(sum>TotalSum && sum>MaxSum){
//         cout<<sum;
//         t=true;
//         break;
//     }
//     else{
//         sum-=arr[i];
//     }
// }
//      if(t==false){
//          cout<<max(MaxSum,TotalSum);
//      }
//         cout<<"\n";
//     }

// }

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
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> res(n);
        ll k = 2 * arr[0];
        // cout<<k;

        ll s = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                res[i] = 2 * arr[i];
            }
            else
            {
                s += arr[i - 1];
                ll e = 2 * arr[i];

                res[i] = s + e;
                // cout<<res[1]<<" ";
            }
        }
        // for (int i = 0; i < res.size(); i++)
        // {
        //     cout << res[i] << " ";
        // }
        cout<<*max_element (res.begin(), res.end());
        cout << "\n";
    }
}