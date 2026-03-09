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

    int n, m, k;
    int out = 0;
    cin >> n >> m >> k;

    vi p(n), a(m);

    loop(i, n){
        cin >> p[i];
    }

    loop(i, m){
        cin >> a[i];
    }

    srt(a);
    srt(p);

    int ac = 0, pc = 0;

    while(ac < m && pc < n){
        if (a[ac] >= p[pc] - k && a[ac] <= p[pc] + k){
            out += 1;
            ac += 1;
            pc += 1;
        }

        else if (a[ac] < p[pc] - k) ac += 1;

        else if (a[ac] > p[pc] + k) pc += 1;

    }

    cout << out << endl;

    return 0;
}