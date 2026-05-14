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
    vpi m(n);
    loop(i, n){
        cin >> m[i].first >> m[i].second;
    }
    ll sum = 0;

    vll mult(n);
    int min = 500;
    int minf = 500;
    int mins = 500;
    loop(i, n){
        if (m[i].first < min){
            min = m[i].first;
            minf = i;
            mins = i-1;
        }
        if (m[i].second < min){
            min = m[i].second;
            mins = i;
            minf = i+1;
        }

        mult[i] = m[i].first * m[i].second;
    }
    
    ll maxloss = -10000000;

    loop(i, n){
        if (m[i].first == min){
            if(i == 0) maxloss = mult[i];
            else{
                // cout << "toaqpo" << endl;
                maxloss = max(mult[i] + mult[i-1] - m[0].first * m[n-1].second, maxloss);
                // cout << maxloss << endl;
            }
        }
        if (m[i].second == min){
            if (i == n-1){
                maxloss = max(mult[i], maxloss);
            }else{
                maxloss = max(mult[i] + mult[i+1] - m[0].first * m[n-1].second, maxloss);
            }
        }
    }


    loop(i, n){
        sum += min * mult[i];
    }
    sum -= maxloss * min;
    // cout << maxloss << endl;
    cout << sum << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
