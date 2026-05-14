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
    cin >> n;
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    multiset<char> ma, mb, mc;

    loop(i, a.size()) ma.insert(a[i]);
    loop(i, b.size()) mb.insert(b[i]);
    loop(i, c.size()) mc.insert(c[i]);
    
    
    int counta = 0;
    for(auto it = ma.begin(); it != ma.end(); it++){
        if (ma.count(*it) > counta) counta = ma.count(*it);
    }
    int countb = 0;
    for(auto it = mb.begin(); it != mb.end(); it++){
        if (mb.count(*it) > countb) countb = mb.count(*it);
    }
    int countc = 0;
    for(auto it = mc.begin(); it != mc.end(); it++){
        if (mc.count(*it) > countc) countc = mc.count(*it);
    }
    cout << counta << ' ' << countb << ' ' << countc;
    
    int plus = 0;

    if (n - (a.size() - counta) > 0){
        if ((a.size() > counta) && (n - (a.size() - counta)) %2) plus = 1;
        counta = a.size() - (n - (a.size() - counta)) %2;
        counta += plus;
    }else{
        counta += n;
    }
    plus = 0;
    if (n - (b.size() - countb) > 0){
        if (b.size() > countb && (n - (b.size() - countb)) %2) plus = 1;
        countb = b.size() - (n - (b.size() - countb)) %2;
        countb += plus;
    }else{
        countb += n;
    }
    plus = 0;
    if (n - (c.size() - countc) > 0){
        if (c.size() > countc && (n - (a.size() - countc)) %2) plus = 1;
        countc = c.size() - (n - (c.size() - countc)) %2;
        countc += plus;
    }else{
        countc += n;
    } 

    int m = max(max(counta, countb), countc);

    cout << counta << ' ' << countb << ' ' << countc;

    if (m == counta){
        if (counta == countb || counta == countc){
            cout << "Draw" << endl;
            return;
        }
        cout << "Kuro" << endl;
        return;
    }

     if (m == countb){
        if (countb == counta || countb == countc){
            cout << "Draw" << endl;
            return;
        }
        cout << "Shiro" << endl;
        return;
    }
   
    if (m == countc){
        if (countc == countb || counta == countc){
            cout << "Draw" << endl;
            return;
        }
        cout << "Katie" << endl;
        return;
    }




   

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
