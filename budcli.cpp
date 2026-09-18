#include <cstdlib>
#include <iostream>
#include <string>
int main() {
  std::string name;
  std::cout << "Enter a package: ";
  std::cin >> name;
  std::string command = "sudo apt install " + name;
  system(command.c_str());
  return 0;
}
