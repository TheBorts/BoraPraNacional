#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
  int n; cin >> n;
  vector<int> ds(n);
  int total = 0;
  for(int i = 0; i < n; i++){
    int a, d; cin >> a >> d;
    ds[i] = a;
    total += d;
  }
  sort(ds.begin(), ds.end());
  int pen = 0;
  int t = 0;
  for(int i = 0; i < n; i++){
    t += ds[i];
    pen += t;
  }
  cout << - pen + total << endl;
}
