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

    int t;
    cin >> t;

    loop(i, t){
        string s;
        cin >> s;
        const int INF = 1e9;
        vi l(3, INF);
        int m = INF;

        rloop(j, s.size()){
            l[s[j] - '1'] = j;
            int f = 0;
            if (s[j] - '1' == 0) {
                f = max(l[1]-j, l[2]-j);
            }else if(s[j] - '1' == 1){
                f = max(l[0]-j, l[2]-j);
            }else{
                f = max(l[1]-j, l[0]-j);
            }
            m = min(f+1, m);
        }
        if (m > s.size()) {
            cout << 0 << endl;
            continue;
        }
        cout << m << endl; 

    }

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
