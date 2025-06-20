#include <fstream>
#include <istream>
#include <iostream>
#include <map>
#include <string>

int main() {
  std::ifstream header_file ("./var/httpheaders.txt", std::istream::in);
  std::string line;

  std::map<std::string, int> header_counts;

  while (std::getline(header_file, line))
  {
    if (header_counts.find(line) == header_counts.end()) {
      header_counts.insert(std::make_pair(line, 1));
    }
  }

  for (auto const& header : header_counts) {
    std::cout << header.first << ": " << header.second << std::endl;
  }
}
