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
using vll = vector<ll>;

ll rec(int n, int now, ll sum_l, ll max, vll a){
    if (n == now){
        return abs(max - 2*sum_l);
    }
    return min(rec(n, now+1, sum_l + a[now], max, a),rec(n, now+1, sum_l, max, a));

}


int main(){

    int n;
    cin >> n;
    vll a(n);
    loop(i, n) cin >> a[i];
    ll sum = 0;
    loop(i, n) sum += a[i];


    cout << rec(n, 0, 0, sum, a);
    return 0;
}