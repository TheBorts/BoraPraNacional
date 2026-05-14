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


void swap(vi &a, int l, int r){
    int mid = (r+l)/2;

    int tmp = a[mid];
    a[mid] = a[mid-1];
    a[mid-1] = tmp;
    // cout << "troquei" << endl;
}

int needmore(vi &a, int l, int r, int k){
    if (l == r-1) return 0;

    int mid = (l+r)/2;

    k -= 1;
        
    if (k > 0){
        swap(a, l, r);
        
        k = needmore(a, l, mid, k);
        k = needmore(a, mid, r, k);
    }
    
    return k;
}

void solve(){

    int n, k;
    cin >> n >> k;

    if (k % 2 == 0 || k >= 2*n){
        cout << -1 << endl;
        return;
    }

    vi a(n);

    loop(i, n) a[i] = i+1;
    
    needmore(a, 0, n, k);

    loop(i, n) cout << a[i] << ' ';
    cout << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
