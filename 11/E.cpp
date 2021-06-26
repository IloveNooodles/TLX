#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len = s.length();
  for(int i = 0; i < len; i++){
    if(int(s[i]) >= 97){
      s[i] = toupper(s[i]);
    }else{
      s[i] = tolower(s[i]);
    }
    cout << s[i];
  }
}