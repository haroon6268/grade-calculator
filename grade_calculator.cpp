#include "input.h"
#include <iostream>

int main()
{
  std::cout << "Enter your name: ";

  std::string name;
  std::cin >> name;

  float score1, score2, score3;
  
  std::cout << "Enter score 1: ";
  takeInput(score1);
  
  std::cout << "Enter score 2: ";
  takeInput(score2);

  std::cout << "Enter score 3: ";
  takeInput(score3);

  float averageScore = (score1 + score2 + score3) / 3;

  std::cout << "Average score is: " << averageScore << "\n";

  std::cout << "Sizeof int is: " << sizeof(int) << "\n";
  std::cout << "Sizeof float is: " << sizeof(float) << "\n";
  std::cout << "Sizeof double is: " << sizeof(double) << "\n";

}
