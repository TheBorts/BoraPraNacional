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

    int n, c;
    cin >> n >> c;

    vi in(c);

    loop(i, c) cin >> in[i];
    vi out(c);
    priority_queue<pii, vpi, greater<pii>> h;

    loop(i, n){
        h.push(make_pair(in[i], i));
        out[i] = i;
    }
    int atual = 0;

    for (int i = n; i < c; i++){
        int time = h.top().first;
        int liberou = h.top().second;
    
        h.pop();
        
        h.push(make_pair(in[i]+time, liberou));
        out[i] = liberou;
    }


    loop(i, c) cout << out[i]+1 << " ";
    cout << endl;

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
