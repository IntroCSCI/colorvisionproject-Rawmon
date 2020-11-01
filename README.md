# Color Translator

## Description

Program will take user values without zeros (as of this deliverable) and print out the RGB value of the corresponding color for those with which ever color blindness they choose (only Red-Green are available).

## Developer

Rayman

## Example

To run the program, give the following commands:
(if your custom input doesn't invoke an out put then your color isn't affected by Red-Green color blindness according to my sources.)
Red: Green: Blue:
255  153    255
255  153    153
(Alternatives)
```
g++ --std=c++11 main.cpp -o cvp; ./cvp
255
153
255
Red-Green
```

Here is an example of the program running:
```
As of this deliverable, only Red-Green color blindness (Protanopia) have been implimented.
Don't use letters
Enter a red value. (0-255)
255
Enter a Green value. (0-255)
153
Enter a blue value. (0-255)
255
Enter type of color blindness. Type help for types of color blindness.(Red-Green only one available right now)
Red-Green
255 255 153     255 237 162
(Your color)      (Color affected by Red-Green)
```

## C++ Guide

### Variables and Data Types

By using prerequisites so that only valid number in the RGB spectrum, the user can insert a color, so that the program may then filter through a file containing the chose color and the corresponding color affected by the selected color blindness

### Input and Output

By allowing the program to store the users input and interpret them individually so that It may find it in the selected file.

### Decisions

By allowing the program to decide which line of code has the initial colors that the user has entered.

### Iteration

By allowing letting the program repeat until a valid integer is input by the user as well as having the program sift through the entire file in search of the users selected values.

### File Input and Output

By taking into account the integers and strings