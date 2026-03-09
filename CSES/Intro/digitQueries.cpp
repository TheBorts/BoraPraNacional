#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for(int i = 0; i < n; i++)
#define rloop(i, n) for(int i = n-1; i >=0; i--)
#define MOD 1000000007

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vc = vector<char>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpi = vector<pii>;
using vll = vector<ll>;

int main(){

    ll q, k;

    cin >> q;

    loop(n, q){
        cin >> k;

        ll quant = 9, i = 1;
        ll tens = 1;
        while (k > quant){
            k = k - quant;
            
            i += 1;
            tens *= 10;
            quant = 9 * i * tens;

        }

        ll d = (k-1) % i;
        ll num = (k-1) / i;

        
        num = tens + num;
        
        loop(_, i-d-1)
        num = num / 10;

        cout << num % 10 << endl;

    }

    return 0;
}