#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vll = vector<ll>;

int main(){

    ll t;
    cin >> t;

    for(int i = 0; i < t; i++){
        ll x, y;
        cin >> y >> x;
        
        ll z = max(x, y);
        ll z2;
        if (z % 2 == 0){
            if(z == x){
                z2 = (z-1)*(z-1) + y;
            }else{
                z2 = z*z - x + 1;
            }
        }else{
            if(z == x){
                z2 = (z)*(z) - y + 1;
            }else{
                z2 = (z-1)*(z-1) + x;
            }
        }
        cout << z2 << endl;

    }

}