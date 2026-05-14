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

ll rec(int i, int j, vll& a, vector<vector<long long>>& dp){
    if (dp[i][j] > -1e10) return dp[i][j];
    if (i == j) return a[i];
    

    long long out = max(a[j] - rec(i, j-1, a, dp), a[i] - rec(i+1, j, a, dp));
    dp[i][j] = out;
    return out;
}

void solve(){

    int n;

    cin >> n;
    vll a(n);
    loop(i, n) cin >> a[i];
    vector<vector<long long>> dp(n, vector<long long>(n, -1e10-1));

    cout << rec(0, n-1, a, dp) << endl;
    

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
