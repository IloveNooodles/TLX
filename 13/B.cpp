#include <bits/stdc++.h>
using namespace std;

void pegunungan(int x){
  if(x > 0){
      pegunungan(x-1);
      for(int i = 0; i < x; i++){
        cout << "*";
      }
      cout << endl;
      pegunungan(x-1);
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int x;
  cin >> x;
  pegunungan(x);
}