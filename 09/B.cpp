#include <bits/stdc++.h>
using namespace std;

int main(){
  int angka[105];
  int i = 0;
  while(cin >> angka[i]){
    i++;
  }
  for(int j = i - 1; j >= 0; j--){
    cout << angka[j] << endl;
  }
}