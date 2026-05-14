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
    char c;

    vi r(n, 1);
    vi l(n, 1);
    int min = 1;
    
    string s;
    cin >> s;

    

    loop(i, n-1){
        c = s[i];
        if (c == '='){
            r[i+1] = r[i];
        }else if(c == 'R'){
            r[i+1] = r[i] + 1;
        }
    }
    
    rloop(i, n-1){
        c = s[i];
        if (c == '='){
            l[i] = l[i+1];
        }else if(c == 'L'){
            l[i]  = l[i+1]+1;
        }
    }


    loop(i, n){
        cout << max(l[i], r[i]) << ' ';
    }
    cout << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
