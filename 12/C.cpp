#include <bits/stdc++.h>
using namespace std;

int func(int x, int k, int a, int b){
  int temp = abs(a*x + b);
  if (k == 1){
    return temp;
  }else return func(temp, k-1, a, b);
}

int main(){
  int a, b, k, x;
  cin >> a >> b >> k >> x;
  cout << func(x,k,a,b);
}