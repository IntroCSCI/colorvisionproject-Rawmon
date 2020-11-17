#include <iostream>
#include <fstream>
#include "libraries/bitmap.h"
using namespace std;
///////Functions///////////
void RGBvalues(int&,int&,int&);
void fileOpener(string);
void ColorConditions(string,string);
vector<string> SVGFileScanner(string);
/////////////////////////////
int main()
{
 fstream fileReader;
 vector<string> Hexadecimal;
 int red;
 int green;
 int blue;
 string HexRed;
 string HexBlue;
 string HexGreen;
 string SVGorRGB;
 string type;
 string help;
 string color;
 to_string(0);
 /////////////////////////////
 cout<<"Are you using a SVG file or manually inputing the RGB values? (SVG or RGB)\n";
 cin>>SVGorRGB;
 if (SVGorRGB == "SVG"){
   cout<<"Input SVG File Name\n";
   cin>>type;
   Hexadecimal=SVGFileScanner(type);
   for(int index = 0;index < Hexadecimal.size();index++ ){
     cout<<Hexadecimal[index]<<endl;
      HexRed = Hexadecimal[index].substr(0,2);
      HexGreen = Hexadecimal[index].substr(2,2);
      HexBlue = Hexadecimal[index].substr(4,2);
      red = strtol (HexRed.c_str(),NULL,16);
      green = strtol (HexGreen.c_str(),NULL,16);
      blue = strtol (HexBlue.c_str(),NULL,16);
   }
 }
 else if (SVGorRGB == "RGB"){
    cout<<"Don't use letters\n";
    RGBvalues(red,green,blue);
  }
  do{
    cout<<"Enter type of color blindness. Type Help for types of color blindness.\n";
    cin>>type;
    if((type == "Help")||(type == "Description")){
      fileOpener(type);
    }
  } while((type != "Protanopia")&&(type != "Tritanopia")&&(type != "Deutanopia"));
 color = to_string(red)+" "+to_string(green)+" "+to_string(blue);
 //cout<<color<<endl;//// For Testing Purposes
 ColorConditions(type,color);
 //cout<< "Your RGB value:     Blindness value:\n";//Maybe?
 fileReader.close();
 return 0;
}
/////Function Definitions//////////////
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
void RGBvalues(int& Red, int& Green, int& Blue){
  do{
   cout<< "Enter a red value. (0-255)\n";
   cin>>Red;  
   cout<< "Enter a Green value. (0-255)\n";
   cin>>Green;
   cout<< "Enter a blue value. (0-255)\n";
   cin>>Blue;
  }while ((Blue < 0 || 255 < Blue)||(Green < 0 || 255 < Green)||((Red < 0) || (Red > 255)));
}
//Searches for the corresponding RGB values
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
    /*for(int index <= 1; index++){
      cout<<"This color is not affected by "<<fileType<< " colorblindess.\n";
    }*///In case the user doesn't get anything
  }
  fileReader.close();
}
vector<string> SVGFileScanner(string fileType){
  string list;
  vector <string> Hexa;
  string Hexadecimal;
  fstream fileReader;
  fileReader.open(fileType,ios::in);
 while (fileReader.eof()!=true){
    getline(fileReader,list);
    if(list.find('#') != string::npos){
      Hexadecimal=list.substr(list.find('#')+1,6);
      Hexa.push_back(Hexadecimal);
    }
  }
  fileReader.close();
  return Hexa;
}
//source for numbers:(https://www.disabled-world.com/disability/accessibility/websitedesign/color-spectrum-chart.php)