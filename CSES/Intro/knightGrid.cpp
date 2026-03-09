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

    vvi moves = {{1, 2}, {2, 1}, {2, -1}, {1, -2}, {-2, 1}, {-1, 2}, {-1, -2}, {-2, -1}};

    int n;
    cin >> n;

    queue<vi> q;
    q.push({0, 0, 0});
    
    vvi mat(n, vi(n, -1));
    mat[0][0] = 0;
    while (!q.empty()){
        vi atual = q.front();
        int dist = atual[2];
        q.pop();

        for (auto move : moves){
            int u = atual[0] + move[0];
            int v = atual[1] + move[1];
            if (u >= 0 && u < n && v >= 0 && v < n){
                if (mat[u][v] == -1){
                    mat[u][v] = dist + 1;
                    mat[v][u] = dist + 1;
                    q.push({u, v, dist + 1});
                    
                }
            }
        }
    }

    for (auto i : mat){
        for (auto j : i){
            printf("%d ", j);
        }
        cout << endl;
    }

    return 0;
}