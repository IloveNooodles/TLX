#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string s;
  cin >> s;
  int idx = s.find('_');
  int len = s.length();
  bool isSnake = false;

  if(idx != -1){
    isSnake = true;
  }

  if(isSnake){
    for(int i = 0; i < len; i++){
      char x = s[i];
      if(x == '_')continue;
      if(i > 0 && s[i-1] == '_') x = toupper(x);
      cout << x;
    }
    cout << endl;
  } 
  else{
    for(int i = 0; i < len; i++){
      char x = s[i];
      if(isupper(x)){
        cout << "_";
        x = tolower(x);
      }
      cout << x;
    }
    cout << endl;
  }
}