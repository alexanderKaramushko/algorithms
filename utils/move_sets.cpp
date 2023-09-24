#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> permutation;

const int n = 2;

bool chosen[n + 1];

// Например, при n = 2
// 1. Создать цикл длиной 2
// 2. На каждой итерации добавить текущий индекс в массив, если он не был еще добавлен
// 3. Вызвать заново search и вернуться на шаг 1
// 4. После достижения permutation.size() = 1 произвести свертку вызова
// 5. Убрать последний элемент из массива
void search()
{
  if (permutation.size() == n)
  {
    for (int i : permutation)
      cout << "Vector: " << i << '\n';
  }
  else
  {
    for (int i = 1; i <= n; i++)
    {
      // Пропустить выбранную ячейку
      if (chosen[i])
        continue;

      // Отметить текущую ячейку как заполненную
      chosen[i] = true;
      permutation.push_back(i);

      // Запустить новый перебор по заполнению оставшихся ячеек
      search();

      // Предыдущая рекурсия завершилась, очистить последнее установленное значение
      chosen[i] = false;
      permutation.pop_back();
    }
  }
}