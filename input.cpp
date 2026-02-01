#include "input.h"
#include <iostream>

void takeInput(float &inputRef)
{
  bool isInputTaken {false};

  while (!isInputTaken)
  {
    std::cin >> inputRef;

    if(inputRef < 0 || inputRef > 100)
    {
      std::cout << "Value cannot be less than 0 or greater than 100\n";
      std::cout << "Value entered: " << inputRef << "\n";
    }
    else
    {
      isInputTaken = true;
    }
  }
}
