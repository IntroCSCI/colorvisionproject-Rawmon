#include <iostream>
#include <fstream>
#include "libraries/bitmap.h"
using namespace std;

int main()
{
 int red;
 int green;
 int blue;
 string list;
 fstream fileReader;
 string text;
 string readable;
 string type;
 string help;
 int results;
 string color;
 blue = 0;
 green = 0;
 red = 0;
 char code;
 to_string(0);
// make the function here???
 do{
 cout<<"Don't use letters\n";
 cout<< "Enter a red value. (0-255)\n";
 cin>>red;
 cout<< "Enter a Green value. (0-255)\n";
 cin>>green;
 cout<< "Enter a blue value. (0-255)\n";
 cin>>blue;
 }while ((red < 0 && 255 < red) && (green < 0 && 255 < green) && (blue < 0 && 255 < blue) );

  //////////////////////////////////////////////////////////
  do{
   cout<<"Enter type of color blindness. Type Help for types of color blindness.\n";
   cin>>type;
   if (type == "Help"){
     fileReader.open(type,ios::in);
     while(fileReader.eof() != true){
       getline(fileReader,list);
       cout<<list<<endl;
      }
   fileReader.close();
   } 
   else if(type == "Description"){
      fileReader.open(type,ios::in);
     while(fileReader.eof() != true){
       getline(fileReader,list);
       cout<<list<<endl;
      }
   fileReader.close();
   }
   
  }while((type != "Protanopia")&&(type != "Tritanopia")&&(type != "Deutanopia"));
 color = to_string(red)+" "+to_string(blue)+" "+to_string(green);
 //cout<<color<<endl;

  //cout<< "Your RGB value:     Red-Green Color blindness value:\n";
 fileReader.open(type,ios::in);

 while (fileReader.eof()!=true){
   getline(fileReader,text);
   if(text.find(color) != string::npos){
     cout<<text<<endl;
   } 
 }
return 0;
}