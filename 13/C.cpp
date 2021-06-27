#include <bits/stdc++.h>
using namespace std;

bool pernah[15];
int catat[15];
int n;
bool zigzag;
bool condition1, condition2;

void tulis(int kedalaman){
  if(kedalaman > n){
    zigzag = true;
    for(int i = 2; i < n; i++){
      condition1 = (catat[i] > catat[i-1] && catat[i] > catat[i+1]);
      condition2 = (catat[i] < catat[i-1] && catat[i] < catat[i+1]);
      if(!(condition1 || condition2)){
        zigzag = false;
        break;
      }
    }
    if(zigzag){
      for(int i = 1; i <= n; i++){
          cout << catat[i];
        }
      cout << endl;
    }
  }else{
    for(int i = 1; i <= n; i++){
      if(!pernah[i]){
        pernah[i] = true;
        catat[kedalaman] = i;
        tulis(kedalaman + 1);
        pernah[i] = false;
      }
    }
  }
}

int main(){
  cin >> n;
  tulis(1);

}