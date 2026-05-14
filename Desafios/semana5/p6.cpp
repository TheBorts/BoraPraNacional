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

    string s;
    cin >> s;
    int abertos = 0;
    int max = 0;
    int atual = 0;
    int contagem = 0;
    int anterior = 0;
    cout << s.size() << endl;
    loop(i, s.size()){
        
        if (s[i] == '('){
            if (abertos == 0){
                anterior = atual;
                atual = 0;
            }
            abertos += 1;
        }
        else if (s[i] == ')'){
            if (abertos == 0){
                atual = 0;
                anterior = 0;
                continue;
            }
            abertos -= 1;
            if (abertos == 0){
                atual = anterior + atual;
            }
            atual += 2;
            if (atual == max) contagem += 1;
            if (atual > max){
                max = atual;
                contagem = 1;
            }
        }
    }
    if (max == 0) contagem = 1;
    cout << max << ' ' << contagem << endl;

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
