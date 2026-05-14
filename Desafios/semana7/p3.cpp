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
    
    vector<double> in(n+1);

    vector<vector<double>> dp(n+1, vector<double>(n+1, 0.0));

    loop(i, n) cin >> in[i+1];
    dp[0][0] = 1.0;
    double prob = 0.0;
    double sum = 0.0;

    for(int i = 0; i <= n; i++){
        for (int j = i; j <= n; j++){
            if (j == 0) continue;
            sum = dp[i][j-1];
            prob = sum * (1-in[j]);
            if (i > 0){
                sum = dp[i-1][j-1];
                prob += sum * in[j];
            }

            dp[i][j] = prob;
        }
    }

    sum = 0.0;

    for (int i = (n+1)/2; i < n+1; i++) sum += dp[i][n];

    cout << fixed << setprecision(10) << sum << endl;




}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
