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
    
    loop(i, t){
        int n;
        cin >> n;

        vi a(n);

        loop(j, n) cin >> a[j];

        int l = 0, int r = 0;

        vi 1L(n, 0);
        vi 2L(n, 0);

        

        loop(j, n){
            if (a[i] == 2){
                2L[i+1] = 2L[i] + 1;
                continue;
            }else if(a[i] == 1){
                1L[i+1] = 1L[i] + 1:
                continue;
            }
            1L[i+1] = 1L[i];
            2L[i+1] = 2L[i];
        };


        total



    }

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
