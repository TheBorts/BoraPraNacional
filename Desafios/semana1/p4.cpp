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
bool sorta(pair<int, int> i, pair<int, int> j){
    if (i.second == j.second) return (i.first < j.first);
    return (i.second > j.second);
}

void solve(){

    int n, x, y, z;
    cin >> n >> x >> y >> z;

    vpi math(n);
    vpi engl(n);

    vpi total(n);

    loop(i, n) {
        math[i].first = i;
        cin >> math[i].second; 
    }

    loop(i, n) {
        engl[i].first = i;
        cin >> engl[i].second;
        total[i].first = i;
        total[i].second = math[i].second + engl[i].second;
    }
    
    sort(math.begin(), math.end(), sorta);
    sort(engl.begin(), engl.end(), sorta);
    sort(total.begin(), total.end(), sorta);
    
    // loop(i, n) cout << math[i].first << ' ';
    // cout << endl;
    //
    // loop(i, n) cout << engl[i].first << ' ';
    // cout << endl;
    //
    // loop(i, n) cout << total[i].first << ' ';
    // cout << endl;
    //


    vi accepted;

    loop(i, x){
        accepted.pb(math[i].first);
    }

    loop(i, y){
        if (find(accepted.begin(), accepted.end(), engl[i].first) != accepted.end()){
            y += 1;
            continue;
        }else{
            accepted.pb(engl[i].first);
        }
    }

    loop(i, z){
        if (find(accepted.begin(), accepted.end(), total[i].first) != accepted.end()){
            z += 1;
            continue;
        }else{
            accepted.pb(total[i].first);
        }
    }
  

    srt(accepted);
    loop(i, accepted.size()) cout << accepted[i] + 1 << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
