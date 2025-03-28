#include <iostream>

int // тело основной функции (main function body)
main()
{
  std::string name; // переменная имени (name variable)
  std::cout << "Enter your name: " << std::endl;
  std::cin >> name; // Ввод переменной name (name input)
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
// This program asks for user's name
