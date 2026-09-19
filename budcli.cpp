#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main() {
  cout << R"( ______                  __   ______  _____     _____  )" << endl;
  cout << R"(|_   _ \                |  ].' ___  ||_   _|   |_   _| )" << endl;
  cout << R"(  | |_) | __   _    .--.| |/ .'   \_|  | |       | |   )" << endl;
  cout << R"(  |  __'.[  | | | / /'`\' || |         | |   _   | |   )" << endl;
  cout << R"( _| |__) || \_/ |,| \__/  |\ `.___.'\ _| |__/ | _| |_  )" << endl;
  cout << R"(|_______/ '.__.'_/ '.__.;__]`.____ .'|________||_____| )" << endl;
  cout << "" << endl;
  string name;
  cout << "Enter a package: ";
  cin >> name;
  string command = "sudo apt-get install " + name;
  system(command.c_str());
  return 0;
}
