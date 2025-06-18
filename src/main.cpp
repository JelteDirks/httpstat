#include <fstream>
#include <istream>
#include <iostream>
#include <string>
#include <LineReader.h>

int main(int argc, char **argv) {
  std::ifstream header_file ("./var/httpheaders.txt", std::istream::in);

  LineReader lr (std::move(header_file));
  std::string line;

  while (lr.get_actual_line(line))
  {
    std::cout << line << std::endl;
  }

}
