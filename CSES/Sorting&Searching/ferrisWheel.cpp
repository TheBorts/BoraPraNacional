#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for(int i = 0; i < n; i++)
#define rloop(i, n) for(int i = n-1; i >=0; i--)
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

int main(){

    int n, k;

    cin >> n >> k;

    vi w(n);

    loop(i, n) cin >> w[i];

    int p = 0, g = n-1;
    int out = 0;

    srt(w);

    while (p <= g){
        if (w[p]+w[g]<= k){
            p += 1;
        }
        
        g -= 1;
        out += 1;
    }

    cout << out << endl;

    return 0;
}