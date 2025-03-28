#include <iostream>

int //тело основной функции
main()
{
  std::string name; //переменная имени
  std::cout << "Enter your name: " << std::endl;
  std::cin >> name;//Ввод переменной name
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
