#include <iostream>
#include <vector>
#include <string>
#include "calc_mod.cpp"

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x;
  int m;

  cin >> x >> m;

  calc_mod(x, m);

  return 0;
}