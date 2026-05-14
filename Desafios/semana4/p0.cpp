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

double delta = 0.00001;

void solve(){

    int a, b, c, d, e, f;

    while(cin >> a >> b >> c >> d >> e >> f){

        double s = 0.5;
        double s_old = s;

        loop(i, 100){
            double val = a * pow(exp(1.0), -s) + b * sin(s) + c * cos(s) + d * tan(s) + e * s * s + f;
            double der = -a * pow(exp(1.0), -s) + b * cos(s) - c * sin(s) + d / pow(cos(s), 2) + 2*e*s;
            s_old = s;
            s = s - val/der;
        }
        if (abs(s_old - s) < 0.00001 && s < 1+delta && s > -delta){
            if (s < 0) s *= -1;
            cout << fixed << setprecision(4) << s << endl;
        }else{
            cout << "No solution" << endl;
        }

    }
    
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();

    return 0;
}
