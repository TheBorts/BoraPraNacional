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

    vll a(n);

    loop(i, n) cin >> a[i];

    ll l = 0, r = 0;
    ll sum = 0;
    ll max = -5e10;

    while (r < n){
        sum += a[r];
        
        if (sum > max){
            max = sum;
        }

        if (sum <= 0){
            l = r;
            sum = 0;
        }

        r++;
    }

    cout << max << endl;



}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
