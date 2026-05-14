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
bool sort2(pair<int, int> i, pair<int, int> j){
    if (i.second == j.second) return (i.first < j.first);
    return (i.second < j.second);
}

void solve(){

    int n;
    cin >> n;
    vpi a(n, {0, 0});

    loop(i, n) cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end(), sort2);

    int count = 0;
    int now = 0;
    int time = 0;
    while (now < n){
        if (a[now].first >= time){
            count++;
            time = a[now].second;
        }
        now++;
    }
    cout << count << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
