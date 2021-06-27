#include <bits/stdc++.h>
using namespace std;

bool visited[26][26] = {false};
int color[26][26];
int n,m,b,k;

int flood(int x, int y){
  if(!visited[x][y]){
    if(x >= 0 && x < n && y >= 0 && y < m){
      if(color[x][y] == color[b][k]){
        visited[x][y] = true;
        int res = 1;

        res += flood(x-1,y);
        res += flood(x,y-1);
        res += flood(x+1,y);
        res += flood(x,y+1);

        return res;
      }
    }
  }
  return 0;
}

int main(){
  cin >> n >> m;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> color[i][j];
    }
  }
  cin >> b >> k;
  int ans = flood(b, k);
  cout << ans*(ans - 1) << endl;
}