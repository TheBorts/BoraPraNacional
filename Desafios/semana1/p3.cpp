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

    int n, q;
    cin >> n >> q;
    vc a(n+3);
    loop(i, n) cin >> a[i];
    int count = 0;


    loop(i, q){
        int l, k;
        // cout << l << ' ' << k << endl;
        cin >> l >> k;
        if (l == 1){
            count += k; 
            count = count % n;
            // cout << count << endl;
        }else{
            cout << a[(k - 1 - count + n)%n] << endl;
            
            // cout << (k-1-count)%n << endl;
        }
    }

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
