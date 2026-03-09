#include<bits/stdc++.h> 
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main(){

    ll t = 0;
    cin >> t;

    for(int i = 0; i < t; i++){
        ll n, x;
        cin >> n >> x;

        vi a(n);
        for (int j = 0; j < n; j++){
            a[j] = 0;
        }
        a[0] = x;
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

    return 0;
}