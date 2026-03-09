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

void solve(){
    
    int n, m;

    cin >> n >> m;
    multiset<int> a;


    int b;

    loop(i, n){
        cin >> b;
        a.insert(b);
    }

    loop(i, m){
        cin >> b;
        auto it = a.upper_bound(b);

        if (it == a.begin()){
            cout << -1 << "\n";
        }else{
            it--;
            cout << *it << "\n";
            a.erase(it);
        }
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}