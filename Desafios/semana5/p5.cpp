#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for(int i = 0; i < n; i++)
#define rloop(i, n) for(int i = n-1; i >=0; i--)
#define pb push_back
#define srt(a) sort(a.begin(), a.end())

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
bool sortB(pair<int, int> i, pair<int, int> j){ return (i.first < j.first);}
bool sortE(pair<int, int> i, pair<int, int> j){ return (i.second < j.second);}


void solve(){

    int n, k;

    cin >> n >> k;

    vll h(n);
    loop(i, n) cin >> h[i];
    vi dp(n, 0);
    ll val = 0;
    ll minv = 0;
    
    for(int i = 1; i < n; i++){
        minv = 5000000000;
            
        for (int j = 1; j <= min(i, k); j++){
            val = dp[i-j] + abs(h[i] - h[i-j]);
            if (val < minv) minv = val;
        }
        dp[i] = minv;
    }
    cout << dp[n-1] << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
