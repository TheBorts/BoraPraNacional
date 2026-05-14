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
    vector<string> a(300);
    while (n != 0){

        loop(i, n){            
            cin >> a[i];
        }

        int m = 0;
        int h = 0, v = 0, d1 = 0, d2 = 0;
        loop(i, n){
            h = 0;
            v = 0;
            loop(j, n){
                h += a[i][j]-'0';
                v += a[j][i]-'0';
            }
            m = max(max(v, h), m);
        }
        loop(i, 2*n-1){
            d1 = 0;
            d2 = 0;
            loop(j, n){
                if (i+j-n+1 >= 0 && i+j-n+1 < n) d1 += a[j][i+j-n+1]-'0';
                if (i-j >= 0 && i-j < n) d2 += a[j][i-j]-'0';
            }
            m = max(max(d1, d2), m);
        }
        
        cout << m << endl;
        cin >> n;
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
