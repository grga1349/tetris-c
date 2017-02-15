#ifndef TYPE_H
#define TYPE_H

#include "defines.h"

// Define type struct
typedef struct {
  int blocks [4][4][4];
  Color color;
} Type
// Define color struct.
typedef struct {
  int r;
  int g;
  int b;
  int a;
} Color
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

#endif // TYPE_H
