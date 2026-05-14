#include <bits/stdc++.h>

using namespace std;
#define int long long
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
int conta_barulho(string a){
    int res = 0;
    int count_h = 0;
    for (int i = a.size()-1; i >= 0; i--) {
        if (a[i] == 's')
            res += count_h;
        else
            count_h ++;
    }
    return res;
}
bool sortB(pair<int, int> i, pair<int, int> j){ return (i.first < j.first);}
bool sortE(pair<int, int> i, pair<int, int> j){ return (i.second < j.second);}
bool sort2(string i, string j){
    int s1 = count(i.begin(), i.end(), 's');
    int h1 = count(i.begin(), i.end(), 'h');
    int s2 = count(j.begin(), j.end(), 's');
    int h2 = count(j.begin(), j.end(), 'h');
    int a = s1*h2;
    int b = s2*h1;
    if (a == b){
        int pa = conta_barulho(i);
        int pb = conta_barulho(j);
        return (pa > pb);
    }
    return (a > b);
}

void solve(){
    int n; 
    cin >> n;
    vector<string> S(n);
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }
    sort(S.begin(), S.end(), sort2);
    int count_h = 0;
    int res = 0;
    for (int i = S.size()-1; i >= 0; i--) {
        for (int j = S[i].size()-1; j >= 0; j--) {
            if (S[i][j] == 's')
                res += count_h;
            else
                count_h ++;
        }
    }
    cout << res << endl;


}

int32_t main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
