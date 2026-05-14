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
bool sortE(pair<int, int> i, pair<int, int> j){ return (i.second > j.second);}


void solve(){

    int t;
    cin >> t;

    loop(_, t){
        int n;
        cin >> n;
        vpi a(n), b(n), c(n);
        loop(i, n){
            int x;
            cin >> x;
            a[i].first = i;
            a[i].second = x;
        }
        loop(i, n){
            int x;
            cin >> x;
            b[i].first = i;
            b[i].second = x;
        }
        loop(i, n){
            int x;
            cin >> x;
            c[i].first = i;
            c[i].second = x;
        }

        sort(a.begin(), a.end(), sortE);
        sort(b.begin(), b.end(), sortE);
        sort(c.begin(), c.end(), sortE);

        ll sum = 0;

        loop(i, 3){
            loop(j, 3){
                loop(k, 3){
                    if (a[i].first != b[j].first && b[j].first != c[k].first && c[k].first != a[i].first){
                        if (a[i].second + b[j].second + c[k].second > sum) {
                            sum = a[i].second + b[j].second + c[k].second;
                        }
                    }
                }
            }
        }

        cout << sum << endl;
    }

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
