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

bool sortE(pair<int,int> i, pair<int,int> j){return i.second < j.second;}

void solve(){
    
    int n;
    cin >> n;

    vpi m(n);

    loop(i, n) cin >> m[i].first >> m[i].second;

    sort(m.begin(), m.end(), sortE);

    int sum = 0;
    int curr = 0;

    loop(i, n){
        if (m[i].first >= curr){
            sum += 1;
            curr = m[i].second;
        }
    }

    cout << sum << endl;

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}