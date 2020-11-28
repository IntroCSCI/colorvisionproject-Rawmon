#include "color.h"
#include <string>

using namespace std;

void fileOpener(string fileType){
  string list;
  fstream fileReader;
  fileReader.open(fileType,ios::in);
  while(fileReader.eof() != true){
    getline(fileReader,list);
    cout<<list<<endl;
  }
  fileReader.close();
}
void ColorConditions(string fileType, string RGB){
 string list;
 int index = 0;
 fstream fileReader;
  fileReader.open(fileType,ios::in);
 while (fileReader.eof()!=true){
    getline(fileReader,list);
    if(list.find(RGB) != string::npos){
      cout<<list<<endl;
    } 
  }
  fileReader.close();
}