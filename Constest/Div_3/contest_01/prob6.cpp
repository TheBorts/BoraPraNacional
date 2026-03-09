#include<bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;


int main(){
    ll t;
    cin >> t;

    for (int i = 0; i < t; i++){
        ll n, k;
        cin >> n >> k;
        ll now = 1;
        vi a(n);
        for (int j = 0; j <= (n-1)/2; j++){
            if (n % now == 0){
                a[j] = k;
                a[n-j-1] = k;
            }
            else{
                a[j] = 0;
                a[n-j-1] = 0;
            }
            now *= 2;
        }
    

        for (int i = 0; i < t; i++){
            for (int j = 0; j < n; j++){
                if (j == n-1){
                    cout << a[j];
                    cout << endl;
                }
                else{
                    cout << a[j] << " ";
                }
            }
        }
    }
    
    
    return 0;

}