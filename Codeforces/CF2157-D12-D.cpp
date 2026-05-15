/*

    Author: TheBorts - Lucas Bortoletto

    Idea: 
        - Mainly went with a two-pointer that sets up the best pairs of ranges
        - If left pointer is greater than right limit or vice versa, take it into consideration
            on sum
        - If n odd there maybe a bet left. If it is off range than bet properly else dont at all

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
        ll n, l, r;
        cin >> n >> l >> r;

        vll a(n, 0);
        loop(i, n) cin >> a[i];

        srt(a);
        ll lp = 0, rp = n-1;

        ll cb = 0;

        while (lp < rp){
            if (a[lp] > r){
                cb += a[lp] - r;
                cb += a[rp] - r;
                rp--;
                lp++;
                continue;
            }else if (a[rp] < l){
                cb += l - a[lp];
                cb += l - a[rp];
                lp++;
                rp--;
                continue;
            }
            cb -= a[lp];
            lp++; 
            cb += a[rp];
            rp--;
        }

        if (lp == rp){
            if (a[lp] < l) cb += l - a[lp];
            if (a[lp] > r) cb += a[lp] - r;
        }

        cout << cb << endl;

    }

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
