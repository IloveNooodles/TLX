#include <bits/stdc++.h>
using namespace std;

int reverse(int x){
  int temp, ret;
  temp = x;
  ret = 0;

  while (temp > 0)
  {
    ret = ret*10 + temp%10;
    temp = temp/10;
  }
  return ret;
}

int main(){
  int a, b;
  cin >> a >> b;
  a = reverse(a);
  b = reverse(b);
  cout << reverse(a + b);
}