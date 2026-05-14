/*

    Author: TheBorts - Lucas Bortoletto

    Idea: 
        - Basically a greedy that you have to, going from left to right on the array, see how many 
            seconds it would take to match and make that part of the array non decreasing;
        - Keep in memory the most seconds to match;

*/
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

    int t;
    cin >> t;

    loop(_, t){
        int n;
        cin >> n;
        vll a(n, 0);
        loop(i,n) cin >> a[i];

        vll exp(n, 0);

        ll m = 0;

        for (int i = 1; i < n; i++){
            ll diff = 0;
            diff = a[i-1] + exp[i-1] - a[i];
            if (diff <= 0) continue;
            exp[i] = diff;
            // cout << diff << " - ";
            m = max(m,(long long)trunc(log2(diff)) + 1);
            // cout << m << endl;
        }
        
        cout << m << endl;
    }

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
