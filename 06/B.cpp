#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, sum = 0;
  cin >> a;
  for(int i = 0; i < a; i++){
    int x;
    cin >> x;
    sum += x;
  }
  cout << sum;
}