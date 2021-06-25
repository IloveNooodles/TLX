#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, arr[1005];
  cin >> n;

  for(int i = 0; i < 1005; i++){
    arr[i] = 0;
  }

  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    arr[x]++;
  }

  int idxmax = 0;
  for(int i = 0; i < 1005; i++){
    if(arr[idxmax] <= arr[i]){
      idxmax = i;
    }
  }
  cout << idxmax;
}