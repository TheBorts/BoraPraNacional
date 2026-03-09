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

void solve(){
    
    int n;

    cin >> n;
    
    vpi events(2*n);

    loop(i, n){
        int ev1, ev2;
        cin >> ev1 >> ev2;
        events[2*i] = pair(ev1, 1);
        events[2*i+1] = pair(ev2,-1);
    }

    sort(events.begin(), events.end(), sortB);

    int counter = 0;
    int max = 0;

    loop(i, events.size()){
        counter += events[i].second;
        if (max < counter) max = counter;
    }

    cout << max << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}