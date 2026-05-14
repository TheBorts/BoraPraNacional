#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

int main() {
  int n;
  cin >> n;
  vvi c(n, vi(3));
  for (int i = 0; i < n; i++) {
    cin >> c[i][0] >> c[i][1];
    c[i][2] = i;
  }
  sort(c.begin(), c.end());
  vi cr(n);
  int lid = 2;
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  pq.push({0, 1});
  for (int i = 0; i < n; i++) {
    pii br = (pq.top());
    if (c[i][0] > br.first) {
      cr[c[i][2]] = br.second;
      pq.pop();
      pq.push({c[i][1], br.second});
    } else {
      cr[c[i][2]] = lid;
      pq.push(make_pair(c[i][1], lid));
      lid++;
    }
  }
  cout << pq.size() << endl;
  for (int i = 0; i < n; i++) {
    cout << cr[i] << ' ';
  }
  cout << endl;
}
