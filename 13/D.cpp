#include <bits/stdc++.h>
using namespace std;
int n, k;
int catat[15] = {0};

void tulis(int kedalaman){
  if(kedalaman > k){
    for(int i = 1; i <= k; i++){
      cout << catat[i] << " ";
    }
    cout << endl; 
  }
  else{
    for(int j = catat[kedalaman-1]+1; j <= n; j++){
      catat[kedalaman] = j;
      tulis(kedalaman + 1);
    }
  }
}

int main(){
  cin >> n >> k;
  tulis(1);
}