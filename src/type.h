#ifndef TYPE_H
#define TYPE_H

#include "defines.h"

// Define color struct.
typedef struct {
  int r;
  int g;
  int b;
  int a;
} Color;
// Define type struct
typedef struct {
  int blocks [4][4][4];
  Color color;
} Type;
// Type setter functions.
Type setI();
Type setJ();
Type setL();
Type setO();
Type setS();
Type setT();
Type setZ();
// Color setter functions.
Color setGreen();
Color setBlue();
Color setRed();
Color setYellow();
Color setEmpty();
// Map type array;
void mapTypeArray(int from[4][4][4],int to[4][4][4]);

#endif // TYPE_H
