# Color Translator

## Description

Program will allow the user to input an SVG File with Hexadecimal values, or have the user manually input their desired RGB values. The program will then return the corressponding RGB Value afflicted by the desired Color blindness condition.(If no RGB value is printed out then the inputed color is not affected by the color blindness)

## Developer

Rayman

## Example

To run the program, give the following commands:
RGB
Red: Green: Blue:
255  153    255   Protanopia
255  204    051   Deutanopia
255  153    102   Tritanoptia

For SVG Files
Input SVG for File Name.(SVG Preset is #ffffff)
```
g++ --std=c++11 main.cpp -o cvp; ./cvp
RGB
255
153
255
Protanopia
```

Here is an example of the program running:
```
Are you using a SVG file or manually inputing the RGB values? (SVG or RGB
RGB
Don't use letters
Enter a red value. (0-255)
255
Enter a Green value. (0-255)
153
Enter a blue value. (0-255)
255
Enter type of color blindness. Type help for types of color blindness.
Protanopia
255 255 153         255 237 162
//(Your color)      (Color affected by Protanopia)
```

## C++ Guide

### Variables and Data Types

By using prerequisites so that only valid number in the RGB spectrum, the user can insert a color, so that the program may then filter through a file containing the chose color and the corresponding color affected by the selected color blindness.

### Input and Output

By allowing the program to store the users input and interpret them individually so that It may find it in the selected file as well as allowing the user to manually input RGB values or use an SVG file.

### Decisions

By allowing the program to decide which line of code has the initial colors that the user has entered.

### Iteration

By allowing letting the program repeat until a valid integer is input by the user as well as having the program sift through the entire file in search of the users selected values.

### File Input and Output

By taking into account the integers and strings
## Functions

Functions were used to simplify and make the program run much more smoothly and efficiently as well as to make the program easier to read & Understand.
## Vectors & Arrays

Vectors were used to be able to efficiently store and convert the Hexidecimal from the SVG File into RGB values to proccess them.