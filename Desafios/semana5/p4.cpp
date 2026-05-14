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
    
    int n;
    cin >> n;

    vi h(n);
    vi dp(n, 0);


    loop(i, n){
        cin >> h[i];
    }
    dp[1] = dp[0] + abs(h[1]-h[0]);

    for(int i = 2; i < n; i++){
        dp[i] = min(dp[i-1] + abs(h[i-1]-h[i]), dp[i-2] + abs(h[i-2] - h[i]));
    }

    cout << dp[n-1] << endl;

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
