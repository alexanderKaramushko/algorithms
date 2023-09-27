#include <iostream>
#include <array>

using namespace std;

// Жадный алгоритм.
// Перебор до тех пор, пока условие задачи не будет выполнено.
// Нептимален, так как не ищет наиболее результативный вариант.
int wrapper(vector<int> coins, int money)
{
  if (money <= 0)
  {
    return 0;
  }

  bool pickNextCoin = money - coins[0] < 0;

  if (pickNextCoin)
  {
    int start = 1;

    for (int i = 0; i < coins.size(); i++)
    {
      if (money >= coins[i])
      {
        start = i;
        break;
      }
    }

    vector<int> sliced_coins(coins.size() - start);

    for (int i = start; i < coins.size(); i++)
    {
      sliced_coins[i] = coins[i];
    }
  }

  return 1 + wrapper(coins, money - coins[0]);
}

int change(vector<int> coins, int money)
{
  int len = coins.size();

  sort(coins.begin(), coins.end(), greater<int>());

  int count = wrapper(coins, money);

  return count;
}
