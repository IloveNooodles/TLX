#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, p;
  cin >> n >> m >> p;
  int arr1[n][m];
  int arr2[m][p];
  int arr3[m][p];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> arr1[i][j];
    }
  }
  for(int i = 0; i < m; i++){
    for(int j = 0; j < p; j++){
      cin >> arr2[i][j];
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < p; j++){
      arr3[i][j] = 0;
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < p; j++){
      for(int k = 0; k < m; k++){
        arr3[i][j] = arr3[i][j] + arr1[i][k]*arr2[k][j];
      }
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < p; j++){
      cout << arr3[i][j] << " ";
    }
    cout << endl;
  }
}