#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    if(x == 1){
      cout << "BUKAN" << endl;
    }else{
      bool cek = true;
      for(int i = 2; i <= sqrt(x); i++){
        if(x%i == 0){
          cek = false;
          break;
        }
      }
      if(cek){
        cout << "YA" << endl;
      }else cout << "BUKAN" << endl;
    }
  }
}