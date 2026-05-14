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

    vi dpa(n), dpb(n), dpc(n);
    int a, b, c;
    loop(i, n){
        cin >> a >> b >> c;
        if (i == 0){
            dpa[0] = a;
            dpb[0] = b;
            dpc[0] = c;
            continue;
        }
        
        dpa[i] = max(dpb[i-1], dpc[i-1]) + a;
        dpb[i] = max(dpa[i-1], dpc[i-1]) + b;
        dpc[i] = max(dpb[i-1], dpa[i-1]) + c;
    }

    cout << max(max(dpa[n-1], dpb[n-1]), dpc[n-1]) << endl;

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
