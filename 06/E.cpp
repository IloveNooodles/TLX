#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  bool dua = true;
  cin >> n;
  while (n != 1)
  {
    if (n % 2 == 0)
    {
      n = n / 2;
    }
    else
    {
      dua = false;
      break;
    }
  }
  if (dua)
  {
    cout << "ya";
  }
  else
    cout << "bukan";
}