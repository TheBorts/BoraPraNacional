#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main(){

    ll t = 0;
    cin >> t;

    for(ll j = 0; j < t; j++){
        ll n = 0;
        cin >> n;

        ll sumup = 0;
        ll sumdown = 0;

        char c;
        for (ll i = 0; i < n; i++){
            cin >> c;
            if (c == '-'){
                sumup++;
            }
            else{
                sumdown++;
            }
        }

        ll l = sumup/2;
        ll r = sumup - l;
        ll ans = 0;
        ans = l*r*sumdown;
        cout << ans << endl;
    }
}