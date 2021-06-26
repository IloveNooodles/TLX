#include <bits/stdc++.h>
using namespace std;

int main(){
  string s1,s2,s3,s4;
  cin >> s1 >> s2 >> s3 >> s4;
  int idx = s1.find(s2);
  s1.erase(idx, s2.length());
  idx = s1.find(s3) + s3.length();
  s1.insert(idx,s4);
  cout << s1;
}