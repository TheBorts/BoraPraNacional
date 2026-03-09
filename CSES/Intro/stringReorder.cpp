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
using vpi = vector<pii>;
using vll = vector<ll>;

int main(){

    vi count(26, 0);
    int total = 0;
    int max_num = 0;

    string line = "";
    getline(cin, line);


    for(auto c : line){
        count[c - 'A'] += 1;
    }

    loop(i, 26){
        total += count[i];
        
    }

    if (2 * count[max_num] > total + 1){
        cout << -1 << endl;
        return 0;
    }

    int placed = 0;
    int first = -1;
    int last = -1;

    loop(i, total){
        max_num = 0;
        loop(j, 26){
            if (count[max_num] < count[j]) {
                max_num = j;
            }
            if (first == -1 && j != last && count[j] > 0){
                first = j;
            }
        }
        
        if (2 * count[max_num] == total - placed + 1){
            cout << char('A' + max_num);
            count[max_num] -= 1;
            last = max_num;
        }else{
            cout << char('A' + first);
            count[first] -= 1;
            last = first;
        }

        placed += 1;
        first = -1;

    }

    cout << endl;

    return 0;
}