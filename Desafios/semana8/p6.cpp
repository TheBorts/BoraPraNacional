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
    vpi a(n);

    loop(i, n) cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end(), sortB);

    int count = 0;
    loop(i, n){
        if (i == 0 || i == n-1){
            count++;
            continue;
        }
        
        if (a[i].first - a[i-1].first > a[i].second){
            count++;
            continue;
        }
        if (a[i+1].first - a[i].first > a[i].second){
            count++;
            a[i].first += a[i].second;
        }
    }

    cout << count << endl;

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
