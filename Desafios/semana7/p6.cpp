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
    
    int n;
    int q;

    cin >> n >> q;

    vvi a(n+1, vector<int>(n+1, 0));

    char in;
    int plus = 0;

    loop(i, n+1){
        loop(j, n+1){
            if (i == 0 || j == 0) continue;
            cin >> in;
            if (in == '*') plus = 1;
            a[i][j] += a[i-1][j];
            a[i][j] += a[i][j-1];
            a[i][j] -= a[i-1][j-1];
            a[i][j] += plus;
            plus = 0;
        }
    } 


    int y1, x1, y2, x2;
    loop(i, q){
        cin >> y1 >> x1 >> y2 >> x2;
        
        cout << a[y1-1][x1-1] + a[y2][x2] - a[y1-1][x2] - a[y2][x1-1] << endl;

    }


}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
