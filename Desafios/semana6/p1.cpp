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
        bool pos = false;
        ll max = 0;
        ll sum = 0;
        loop(i, n){
            ll a;
            
            cin >> a;
            if (i == 0){
                if (a < 0){ 
                    pos = false;
                }
                else{
                    pos = true;
                }
                max = a;
                continue;
            }

            if (a < 0 && pos){
                sum += max;
                pos = false;
                max = a;
            }else if (a > 0 && !pos){
                sum += max;
                pos = true;
                max = a;
            }else{
                if (a > max) max = a;
            } 
        }
        sum += max;
        cout << sum << endl;
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
