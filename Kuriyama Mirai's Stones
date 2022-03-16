
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int arr[111111];
long long cum[111111],sor[111111];
int main() {
    fast 
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int t, a, l, r;
    cin >> t;
    
      for (int i = 1; i <= n; i++){
                cum[i] = cum[i-1] + arr[i];
            }
            sort(arr+1, arr + n+1);
      for (int i = 1; i <= n; i++){
                
                sor[i] = sor[i-1] + arr[i];
              
        }
    while(t--){
        cin >> a >> l >> r;
        if (a == 1){
         
        cout << cum[r] - cum[l-1] << endl;
        }else if (a == 2){
            
       
        cout << sor[r] - sor[l-1] << endl;
    }
     
}
  
    return 0;
}
