#include <bits/stdc++.h>
using namespace std;

int func(int a, int b, int x){
  return abs(a*x+b);
}

int main(){
  int a,b,k,x;
  cin >> a >> b >> k >> x;
  int res = x;
  for(int i = 0; i < k; i++){
    res = func(a,b,res);
  }
  cout << res;
}