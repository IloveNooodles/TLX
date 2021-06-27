#include <bits/stdc++.h>
using namespace std;

string biner(int x){
  if(x == 1){
    return "1";
  }
  else if(x%2 == 0){
    return biner(x/2) + "0";
  }else {
    return biner(x/2) + "1";
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  cout << biner(n);
}