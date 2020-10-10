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
 string type;
 string help;
 string results;
 string color;
 blue = 0;
 green = 0;
 red = 0;
 char code;
 do{
 cout<<"As of this deliverable, only Red-Green color blindness (Protanopia) have been implimented.\n";
 cout<<"Don't use letters\n";
 cout<< "Enter a red value. (0-255)\n";
 cin>>red;
 cout<< "Enter a Green value. (0-255)\n";
 cin>>green;
 cout<< "Enter a blue value. (0-255)\n";
 cin>>blue;

 }while ((red < 0 && 255 < red) && (green < 0 && 255 < green) && (blue < 0 && 255 < blue) );

  /*//////////////////////////////////////////////////////////////*/

  do{
   cout<<"Enter type of color blindness. Type help for types of color blindness.(Red-Green only one available right now)\n";
   cin>>type;
   if (type == "help"){
     fileReader.open(type,ios::in);
     while(fileReader.eof() != true){
       getline(fileReader,list);
       cout<<list<<endl;
      }
   fileReader.close();
   } 
   
  }while(type != "Red-Green");
 color = to_string(red)+" "+to_string(blue)+" "+to_string(green);
 cout<<color<<endl;

  //cout<< "Your RGB value:     Red-Green Color blindness value:\n";
 fileReader.open(type,ios::in);
 results = type.find(color);
 getline(results,text);
 cout<<text<<endl;
 return 0;
}