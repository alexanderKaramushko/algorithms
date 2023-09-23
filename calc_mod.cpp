#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Расчет по модуля с возможным отрицательным остатком
void calc_mod(int x, int m)
{
  int rest = x % m;

  if (rest < 0)
    rest += m;

  cout << rest << "\n";
}