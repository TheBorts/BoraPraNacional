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


bool visited[7][7];
string line;
int sum = 0;

void rec(int i, int j, int d){

    visited[i][j] = 1;
    int dist = line.length();

    if (dist == d || (i == 6 && j == 0)){
        sum += dist == d;
        visited[i][j] = 0;
        return;
    }

    bool vR = j + 1 < 7 && !visited[i][j+1];
    bool vL = j - 1 >= 0 && !visited[i][j-1];
    bool vD = i + 1 < 7 && !visited[i+1][j];
    bool vU = i - 1 >= 0 && !visited[i-1][j];

    char c = line[d];

    if ((!vD) && (!vU)){
        if (vR && vL){
            visited[i][j] = 0;
            return;
        }
    }
    
    if ((!vR) && (!vL)){
        if (vD && vU){
            visited[i][j] = 0;
            return;
        }
    }

    if (c == '?' || c == 'D'){
        if (vD){
            rec(i+1, j, d+1);
        }
    }
    
    if (c == '?' || c == 'U'){
        if (vU){
            rec(i-1, j, d+1);
        }
    }

    if (c == '?' || c == 'R'){
        if (vR){
            rec(i, j+1, d+1);
            
        }
    }

    if (c == '?' || c == 'L'){
        if (vL){
            rec(i, j-1, d+1);
        }
    }

    visited[i][j] = 0;
}


int main(){

    
    getline(cin, line);

    rec(0, 0, 0);
    
    cout << sum << endl;

    return 0;
}