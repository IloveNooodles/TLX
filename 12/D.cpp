#include <bits/stdc++.h>
using namespace std;

string Palind(string s){
  int len = s.length();
  if(len == 1 || len == 0){
    return "YA";
  }else if(s[len - 1] == s[0]){
    return Palind(s.substr(1, len-2));
  }else return "BUKAN";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s;
  cin >> s;
  cout << Palind(s);
}