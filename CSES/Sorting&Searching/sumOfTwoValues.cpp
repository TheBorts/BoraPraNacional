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
    
    int n, k;
    cin >> n >> k;


    vpi vals(n);

    loop(i, n){
        cin >> vals[i].first;
        vals[i].second = i;
    }

    sort(vals.begin(), vals.end(), sortB);

    int l = 0, r = vals.size()-1;

    while(l < r){
        int s = vals[l].first + vals[r].first;
        if (s > k) r--;
        else if (s < k) l++;
        else if (s == k){
            cout << vals[l].second + 1 << ' ' << vals[r].second + 1<< endl;
            return;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}