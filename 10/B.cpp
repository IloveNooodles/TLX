#include <bits/stdc++.h>
using namespace std;

int arr[2][1001];

void swap(int a, int b, char c, char d){
  int temp, temp1, temp2;
  if(c == 'A') temp1 = 0;
  else temp1 = 1;
  if(d == 'A') temp2 = 0;
  else temp2 = 1;
  temp = arr[temp1][a-1];
  arr[temp1][a-1] = arr[temp2][b-1];
  arr[temp2][b-1] = temp;
}

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < n; j++){
      cin >> arr[i][j];
    }
  }
  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    int x,y;
    char p,q;
    cin >> p >> x >> q >> y;
    swap(x, y, p, q);
   
  }
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < n; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}