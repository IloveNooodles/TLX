#include <bits/stdc++.h>
using namespace std;

int a, b, c, n, active = 1;
int arr[135][135]={0};
string s[130*130] = {""};

void translate(int a, int b, int c, string ss){
  if(ss == s[active]){
    active = active + 1;
    for(int i = a; i < a + c; i++){
      for(int j = b; j < b + c; j++){
        arr[i][j] = 1;
      }
    }
  }else{
    if(c!=1){
      c = c/2;
      translate(a,b,c,ss+"0");
      translate(a, b+c,c,ss+"1");
      translate(a+c,b,c,ss+"2");
      translate(a+c,b+c,c,ss+"3");
    }
  }
}

int main(){
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> s[i];
  }
  cin >> b >> c;
  int d = max(b, c);
  int e = 1;
  while(e < d){
    e = e*2;
  }
  translate(1, 1, e, "1");
  for(int i = 1; i <= b; i++){
    for(int j = 1; j <= c; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}