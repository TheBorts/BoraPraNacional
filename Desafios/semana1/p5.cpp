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

    string s;

    cin >> s;

    if (s[0] == '1') {
        cout << "No" << endl;
        return;
    }
    
    vi col(7, 0);

    if (s[6] == '1') col[0] = 1;
    if (s[3] == '1') col[1] = 1;
    if (s[1] == '1' || s[7] == '1') col[2] = 1;
    if (s[4] == '1') col[3] = 1;
    if (s[8] == '1' || s[2] == '1') col[4] = 1;
    if (s[5] == '1') col[5] = 1;
    if (s[9] == '1') col[6] = 1;
    
    int change = 0;
    
    loop(i, 7){
       if (i == 0) continue;

       if (col[i] != col[i-1]){
           change += 1;
       }
    }
   
    if ((change >= 2 && col[0]) || change >= 3) {
        cout << "Yes" << endl;
        return;
    }

    cout << "No" << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
