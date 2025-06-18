#include <fstream>

class LineReader {
public:
  LineReader(std::ifstream stream);
  ~LineReader();

  int get_actual_line(std::string& str);

private:
  std::ifstream ifs;
  int length = 512;
  char *buf;
};
