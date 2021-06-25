#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    bool cek = true;
    int counter = 0;
    for (int i = 1; i <= sqrt(x); i++){
      if (x % i == 0){
        counter++;
      }
      if(counter > 2){
        cek = false;
        break;
      }
    }
    if (cek){
      cout << "YA" << endl;
    }
    else cout << "BUKAN" << endl;
  }
}
