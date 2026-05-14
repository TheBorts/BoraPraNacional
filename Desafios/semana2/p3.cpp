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

typedef struct node{
    int val;
    node* pai;
    int id;
}no;

no* get_pai(no* ini){
    while (ini->pai != NULL) ini = ini->pai;
    return ini;
}

void solve(){
    
    int n, m;
    cin >> n >> m;

    vector<no> out(n+1);
    loop(i, n){
        out[i].val = 1;
        out[i].pai = NULL;
        out[i].id = i;
    }

    loop(i, m){
        int k;
        cin >> k;
        
        loop(j, k){
            int l = 0;
            no* p, *p_ant;
            cin >> l;        
            out[l].val += k-1;
            
            p = get_pai(&out[l]);
            if (p->id != out[l].id && p->val < out[l].val){
                p->pai = &out[l];
                out[l].pai = NULL;
            }else if (p->id != out[l].id){
                out[l].pai = p;
            }

            if (j != 0){
                if (p_ant->id != p->id){
                    if (p_ant->val > p->val) {
                        p->pai = p_ant;
                    }else{
                        p_ant->pai = p;
                    }
                }
            }
            
            p_ant = p; 
        }
    }

    loop(i, n){
        cout << get_pai(&out[i])->val << " ";
    }
    cout << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
