#include <bits/stdc++.h>
using namespace std;

int main(){
  int k;
  string s;
  cin >> s >> k;
  int panjangS = s.length();
  for(int i = 0; i < panjangS; i++){
    int newa = 0;
    newa = (s[i] - 'a' + k ) % 26 + 'a';
    s[i] = newa;
  }
  cout << s;
}