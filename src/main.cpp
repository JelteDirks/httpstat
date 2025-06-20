#include <fstream>
#include <istream>
#include <iostream>
#include <string>
#include <LineReader.h>

int main(int argc, char **argv) {
  std::ifstream header_file ("./var/httpheaders.txt", std::istream::in);
  std::string line;

  while (std::getline(header_file, line))
  {
    std::cout << line << std::endl;
  }

}
