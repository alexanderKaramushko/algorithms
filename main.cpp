#include <iostream>
#include <vector>
#include "algorithms/greedy/change.cpp"

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> coins(3);

  coins[0] = 1;
  coins[1] = 2;
  coins[2] = 3;

  cout << change(coins, 10);

  cout << "\n";

  return 0;
}
