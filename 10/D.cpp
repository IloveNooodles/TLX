#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int temp = n;
  for(int i = 2; i <= n; i++){
    if(temp%i == 0){
      int cnt = 0;
      while(temp%i == 0){
        cnt++;
        temp = temp/i;
      }
      if(cnt == 1)cout << i;
      else cout << i << "^" << cnt;
      if(temp > 1){
      cout << " x ";
    }
    }
  }
}