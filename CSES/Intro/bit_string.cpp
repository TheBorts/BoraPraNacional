#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for(int i = 0; i < n; i++)
#define rloop(i, n) for(int i = n-1; i >=0; i--)
#define MOD 1000000007

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vll = vector<ll>;

int main(){

    ll n;
    cin >> n;

    ll buff = 1;

    while (n != 0){
        ll k = log2(n)/1;
        ll out = 2;
        ll count = 1;
        loop(i, k-1){
            count = count * 2;
            out = out*out;
            out = out % MOD;
        }
        n = n - count;
        buff = buff * out;
        buff = buff % MOD;
    }
    
    cout << buff << endl;

    return 0;
}