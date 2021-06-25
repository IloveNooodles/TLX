#include <bits/stdc++.h>
using namespace std;

int x[1002], y[1002];

int kedekatan(int d, int i, int j){
  return abs(pow(x[j] - x[i], d)) + abs(pow(y[j] - y[i], d));
}

int main(){
  int n, d;
  cin >> n >> d;
  for(int i = 0; i < n; i++){
    cin >> x[i] >> y[i];
  }

  int min = 9999999;
  int max = -99999;
  int temp = 0;
  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      temp = kedekatan(d, i, j);
      if(temp > max){
        max = temp;
      }
      if(temp < min){
        min = temp;
      }
    } 
  }
  cout << min << " " << max;
}