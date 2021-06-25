#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, max = -100001, min = 100001;
  cin >> n;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    if(x > max)max =x;
    if(x < min)min = x;
  }
  cout << max << " " << min;
}