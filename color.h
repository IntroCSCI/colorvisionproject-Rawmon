//#ifndef COLOR_H
#define COLOR_H
#include <string>
#include <vector>
#include <fstream>

using std::string;
using std::fstream;
class color{
  private:
   fstream fileReader;
  public:
   void fileOpener(string);
   void ColorConditions(string, string);
};