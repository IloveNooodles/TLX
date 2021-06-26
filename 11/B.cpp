#include <bits/stdc++.h>
using namespace std;

int main(){
  string s, t;
  cin >> s >> t;
  int panjangT = t.length();
  int idx = s.find(t);
  while(idx != -1){
    s.erase(idx, panjangT);
    idx = s.find(t);
  }
  cout << s;
}