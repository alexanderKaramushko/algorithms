#include <iostream>
#include <vector>
#include <string>
#include "structures/stack.cpp"

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  Stack s(4);

  s.Push(1);
  s.Push(2);
  s.Push(3);
  s.Push(4);
  s.Push(5);
  s.Push(6);

  cout << "\n";

  return 0;
}