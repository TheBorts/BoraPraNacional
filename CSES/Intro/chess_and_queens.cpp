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

int total = 0;

void print_mat(vvi mat){
    loop(i, 8){
        loop(j, 8){
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "---------------------" <<  endl;
    loop(i, 10000);
}

void refresh(int i, int j, vvi &mat, int diff, vi &gab){

    if (mat[i][j] == 0 || (mat[i][j] == 1 && diff == -1)) gab[i] -= diff;
    mat[i][j] += diff;

    loop (k, 8){
        if (mat[i][k] != -1 && k != j) {
            if (mat[i][k] == 0 || (mat[i][k] == 1 && diff == -1)) gab[i] -= diff;
            mat[i][k] += diff;
        }
        if (mat[k][j] != -1 && k != i) {
            if (mat[k][j] == 0 || (mat[k][j] == 1 && diff == -1)) gab[i] -= diff;
            mat[k][j] += diff;
        }
    }

    int low = min(i, j);
    int high = max(i, j);

    for (int k = -low; k < 8-high; k++){
        if (k != 0){
            if (mat[i+k][j+k] != -1) mat[i+k][j+k] += diff;
            if (mat[i+k][j+k] == 0 || (mat[i+k][j+k] == 1 && diff == -1)) gab[i+k] -= diff;
        }
    }
    if(low+high < 8){
        for (int k = 0; k <= low+high; k++){
            if (k != j){
                if (mat[low+high-k][k] != -1) mat[low+high-k][k] += diff;
                if (mat[low+high-k][k] == 0 || (mat[low+high-k][k] == 1 && diff == -1)) gab[low+high-k] -= diff;
            }

        }
    }else{
        for(int k = 0; k < 14-(low+high); k++){
            if (k!= 7-i){
                if (mat[7-k][(low+high-7)+k] != -1) mat[7-k][(low+high-7)+k] += diff;
                if (mat[7-k][(low+high-7)+k] == 0 || (mat[7-k][(low+high-7)+k] == 1 && diff == -1)) gab[7-k] -= diff;
            }
        }
    }
}

void rec(int i, int j, vvi mat, int quant, vi gab){
    if (quant == 8){ 
        total++;
        return;
    }

    //int l = 0;
    //cin >> l;
    //cout << endl;

    if (gab[i] > 0 && mat[i][j] == 0){
        refresh(i, j, mat, 1, gab);
        loop(k, 8){
            rec(i+1, k, mat, quant+1, gab);
        }
        refresh(i, j, mat, -1, gab);
    }
}

int main(){

    vvi mat(8, vi(8, 0));
    vi gab(8, 8);

    loop(i, 8){
        loop(j,8){
            char in;
            cin >> in;
            if (in == '*'){
                mat[i][j] = -1;
                gab[i] -= 1;
            }
        }
    }    

    loop(r, 8){
        rec(0, r, mat, 0, gab);
    }

    cout << total / 8 << endl;

    return 0;
}