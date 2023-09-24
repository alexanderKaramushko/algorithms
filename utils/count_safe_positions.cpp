#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int n = 4;
int _count = 0;

bool diag1[n * 2];
bool diag2[n * 2];
bool col[n];

void search(int y)
{
  if (y == n)
  {
    _count++;
    return;
  }
  for (int x = 0; x < n; x++)
  {
    // x + y = текущая ячейка побочной(положительной) диагонали по x и y
    // x - y + n -1 = текущая ячейка главной диагонали по x и y,
    // где n - 1 = сдвиг значений диагонали, чтобы не было отрицательных значений
    if (col[x] || diag1[x + y] || diag2[x - y + n - 1])
      continue;

    // Установить фигуру в текущую незанятую и безопасную ячейку
    col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;

    // Продивнуться на следующую горизонталь
    search(y + 1);

    col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
  }
}