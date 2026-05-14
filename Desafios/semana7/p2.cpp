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

    string s1, s2;

    cin >> s1;
    cin >> s2;

    string max = "";
    string menor, maior;

    if (s1.size() < s2.size()){
        menor = s1;
        maior = s2;
    }else{
        menor = s2;
        maior = s1;
    }


    vvi pos(26, vector<int>(0));
    loop(i, maior.size()){
        pos[maior[i]-'a'].pb(i);
    }


    vector<pair<string, int>> dp(menor.size(), pair<string, int>());
    
    if (!pos[menor[0]-'a'].empty()){
        dp[0].first = menor[0];
        dp[0].second = pos[menor[0]-'a'][0];
    } 

    for(int i = 1; i < menor.size(); i++){
        int ms = 0;
        for (int j = 0; j < i; j++){
            int lp = dp[j].second;
            int np = -1;
            if (dp[j].first.size() < dp[i].first.size()) continue;
            for (auto r : pos[menor[i]-'a']){
                if (r > lp) {
                    np = r;
                    break;
                }
            }

            dp[i].second = np;

            if (np != -1){
                dp[i].first = dp[j].first + menor[i];
                continue;
            }
        }
    }
    
    loop(i, menor.size()){
        cout << dp[i].first << endl;
    }

    rloop(i, menor.size()){
        if (dp[i].second != -1){
            cout << dp[i].first << endl;
            return;
        }
    }

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
