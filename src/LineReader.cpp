#include "LineReader.h"
#include <fstream>
#include <iostream>
#include <stdexcept>

LineReader::LineReader(std::ifstream stream) {
  ifs = std::move(stream);
  buf = (char *)malloc(length * sizeof(char));
}

LineReader::~LineReader() { free(buf); }

int LineReader::get_actual_line(std::string &str) {
  str.clear();

  if (!ifs.is_open()) {
    std::cerr << "file is not open" << std::endl;
    return 0;
  }

  ifs.getline(buf, length);

  // TODO: do something with errors

  if(ifs.eof()) {
    return 0;
  }

  str.insert(0, buf);

  return 1;
}
