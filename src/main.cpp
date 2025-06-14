#include <fstream>
#include <istream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  std::ifstream header_file ("./var/httpheaders.txt", std::istream::in);

  char line[512];

  while (header_file.getline(line, 512))
  {
    std::cout << line << std::endl;
  }

}
