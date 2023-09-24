#include <iostream>
#include <array>

using namespace std;

class Stack
{
private:
  int *items;
  int size;
  int memory_blocks;

public:
  Stack(int initial_memory)
  {
    size = 0;
    memory_blocks = initial_memory;
    items = new int[memory_blocks];
  }

  void Push(int number)
  {
    int rest = size % memory_blocks;

    if (size != 0 && rest == 0)
    {
      int *enhanced_items = new int[sizeof(items) + memory_blocks];

      cout << "Enhance!"
           << "\n";

      for (int i = 0; i < sizeof(items); i++)
      {
        enhanced_items[i] = items[i];
      }

      items = enhanced_items;
    }

    items[size] = number;
    size++;

    // протестировать потреблении памяти
  }

  void Pop()
  {
    size--;
  }

  int Peek()
  {
    return items[size - 1];
  }
};