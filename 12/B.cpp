#include <bits/stdc++.h>
using namespace std;

int doubleFact(int x){
  if(x == 1){
    return 1;
  }else if(x%2 == 0){
    return x/2 * doubleFact(x-1);
  }else return x* doubleFact(x-1);
}

int main(){
  int n;
  cin >> n;
  n = doubleFact(n);
  cout << n;
}