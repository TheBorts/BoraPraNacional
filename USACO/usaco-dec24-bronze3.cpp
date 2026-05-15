/*

    Author: TheBorts - Lucas Bortoletto

    Idea: 
        - Find every moo without the change
        - After that find every possible change that leads to a moo, being careful not to 
            erase a moo equal to the one you are adding
        - Then check the sum > f;
*/
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

    int n, f;
    cin >> n >> f;

    string s;
    cin >> s;

    map<string, int> a;

    int i = 0;
    while (i < n-2){
        if (s[i] != s[i+1] && s[i+1] == s[i+2]){
            string sub = s.substr(i, 3);
            a[sub] += 1;
            i += 2;
            continue;
        }
        i++;
    }

    // for(auto const& [key, value] : a){
    //     cout << key << " - " << value << endl;
    // }

    map<string, int> b;

    i = 0;
    while (i < n){
        if (i > 1){
            if (s[i] != s[i-1]){
                string sub = s.substr(i-2, 3);
                sub[2] = sub[1];
                if (i < n-2){
                    string test = s.substr(i, 3);
                    if (test != sub) b[sub] = 1;
                }else{
                    b[sub] = 1;
                }
            }
        }

        if (i > 0 && i < n-1){
            if (s[i-1] != s[i+1] && s[i] != s[i+1]){
                string sub = s.substr(i-1, 3);
                sub[1] = sub[2];
                if (i < n-2){
                    string test = s.substr(i, 3);
                    if (sub != test) b[sub] = 1;
                }else{
                    b[sub] = 1;
                }
            }
        }

        if (i < n-2){
            if (s[i+1] == s[i+2]){
                loop(j, 26){
                    char cn = 'a' + j;
                    string sub = s.substr(i, 3);
                    if (sub[0] == sub[1]){
                        if (i > 0 && cn == s[i-1]) continue;
                        if (i > 1 && s[i-1] == sub[0] && s[i-2] == cn) continue;
                    }
                    if (cn == sub[0] || cn == sub[1]) continue;
                    
                    sub[0] = cn;
                    b[sub] = 1;
                }
            }
        }

        i++;
    }
    
    vector<string> out;

    for (auto const &[key, value] : b){
        a[key] = a[key] + value;
    }

    for (auto const& [key, value] : a){
        if (value >= f) out.pb(key);
    }

    cout << out.size() << endl;

    loop(i, out.size()) cout << out[i] << endl;

}





int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
