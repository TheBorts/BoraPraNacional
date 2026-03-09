#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for(int i = 0; i < n; i++)
#define rloop(i, n) for(int i = n-1; i >=0; i--)
#define srt(a) sort(a.begin(), a.end())
#define pb push_back
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

int bins(vpi &counter, int o){
    int l = -1, r = counter.size();
    int mid;

    while (l < r && r != 0){
        mid = (l+r)/2;
        if (counter[mid].first == o || mid == l) return mid;
        if (counter[mid].first < o) l = mid;
        else r = mid;
    }

    return l;
}

pair<int, int> find(vpi &counter, int o){
    if (o < 0) return pair(-1, 0);
    if (counter[o].second > 0){
        counter[o].second -= 1;
        return pair(counter[o].first, 0);
    }
    if (counter[o].second == 0){
        counter[o].second -= 1;
    }
    
    pair<int, int> a = find(counter, o + counter[o].second);

    counter[o].second += a.second;
    
    return pair(a.first, counter[o].second);
}

int main(){


    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vi t(n), p(m);

    loop(i, n) cin >> t[i];
    srt(t);

    vpi counter(0);
    int l = -1;
    loop(i, n) {
        if (counter.empty() || counter[l].first != t[i]){
            counter.pb(pair(t[i], 1));
            l++;
        }
        else counter[l].second++;
    }

    int k;
    loop(_, m){
        cin >> k;

        int l = bins(counter, k);

        cout << find(counter, l).first << endl;
        //loop(i, counter.size()){
        //cout << "( " << counter[i].first << ", " << counter[i].second << ") -- ";
        //}
        //cout << endl;
    }

    return 0;
}