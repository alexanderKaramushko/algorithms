#include <iostream>
#include <string>
#include "stack.cpp"

using namespace std;

// Обратная польская запись через Stack
void rpn()
{
  Stack s(3);

  while (true)
  {
    string expr;

    getline(cin, expr, '\n');

    for (char ch : expr)
    {
      if (ch == ' ')
      {
        continue;
      }

      if (isdigit(ch))
      {
        // Текущий ASCII-индекс для ch - ASCII-индекс для 0
        s.Push(ch - '0');
      }
      else
      {
        int operand_1 = s.Pop();
        int operand_2 = s.Pop();

        if (ch == '+')
        {
          s.Push(operand_1 + operand_2);
        }

        if (ch == '-')
        {
          s.Push(operand_1 - operand_2);
        }

        if (ch == '*')
        {
          s.Push(operand_1 * operand_2);
        }

        if (ch == '/')
        {
          s.Push(operand_1 / operand_2);
        }
      }
    }

    cout << "Result: " << s.Pop() << "\n";
  }
}
