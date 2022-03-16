
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int frq[200];
int main() {
    fast 
    int n;
    cin >> n;
    char a;
    
    if (n == 1) {
        cout << "Yes";
        return 0; 
    }

    for (int i = 0; i < n; i++){
        cin >> a;
        frq[a]++;
        if (frq[a] == 2){
            cout << "Yes";
            return 0;
        }
    }

        cout << "No"; 
        return 0;
}
