#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for(int i = 0; i < n; i++)
#define rloop(i, n) for(int i = n-1; i >=0; i--)
#define MOD 1000000007

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vc = vector<char>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vll = vector<ll>;

void rec(string s, int pos){
    if(pos == s.size()){
        cout << s << endl;
        return;
    }

    for(int i = pos; i < s.size(); i++){
        if(i != pos && s[i] == s[pos]) continue;
        char aux = s[i];
        s[i] = s[pos];
        s[pos] = aux;

        rec(s, pos+1);
        
        aux = s[i];
        s[i] = s[pos];
        s[pos] = aux;
    }
}

int main(){

    string s;

    cin >> s;
    
    sort(s.begin(), s.end());

    int num = 1;
    for (int i = 1; i <= s.size(); i++)
        num *= i;
    
    int ant = 0;
    for (int i = 1; i <= s.size(); i++){
        if(i == s.size() || s[i-1] != s[i]){
            for (int j = 1; j <= i - ant; j++){
                num /= j;
            }
            ant = i;
        }
    }

    cout << num << endl;

    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));
    
    
    return 0;
}