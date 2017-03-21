#include "type.h"

// Type setters.
Type setI() {
  Type temp;
  int tempArray[4][4][4] = {
    {
      {0, 1, 0, 0},
      {0, 1, 0, 0},
      {0, 1, 0, 0},
      {0, 1, 0, 0}
    }, {
      {0, 0, 0, 0},
      {1, 1, 1, 1},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 0, 1, 0},
      {0, 0, 1, 0},
      {0, 0, 1, 0},
      {0, 0, 1, 0}
    }, {
      {0, 0, 0, 0},
      {0, 0, 0, 0},
      {1, 1, 1, 1},
      {0, 0, 0, 0}
    }
  };
  mapTypeArray(tempArray, temp.blocks);
  temp.color = setBlue();
  return temp;
}

Type setJ() {
  Type temp;
  int tempArray[4][4][4] = {
    {
      {0, 1, 0, 0},
      {0, 1, 0, 0},
      {1, 1, 0, 0},
      {0, 0, 0, 0}
    }, {
      {1, 0, 0, 0},
      {1, 1, 1, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 1, 1, 0},
      {0, 1, 0, 0},
      {0, 1, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 0, 0, 0},
      {1, 1, 1, 0},
      {0, 0, 1, 0},
      {0, 0, 0, 0}
    }
  };
  mapTypeArray(tempArray, temp.blocks);
  temp.color = setGreen();
  return temp;
}

Type setL() {
  Type temp;
  int tempArray[4][4][4] = {
    {
      {0, 1, 0, 0},
      {0, 1, 0, 0},
      {0, 1, 1, 0},
      {0, 0, 0, 0}
    }, {
      {0, 0, 0, 0},
      {1, 1, 1, 0},
      {1, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {1, 1, 0, 0},
      {0, 1, 0, 0},
      {0, 1, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 0, 1, 0},
      {1, 1, 1, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }
  };
  mapTypeArray(tempArray, temp.blocks);
  temp.color = setGreen();
  return temp;
}

Type setO() {
  Type temp;
  int tempArray[4][4][4] = {
    {
      {1, 1, 0, 0},
      {1, 1, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {1, 1, 0, 0},
      {1, 1, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {1, 1, 0, 0},
      {1, 1, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {1, 1, 0, 0},
      {1, 1, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }
  };
  mapTypeArray(tempArray, temp.blocks);
  temp.color = setRed();
  return temp;
}

Type setS() {
  Type temp;
  int tempArray[4][4][4] = {
    {
      {0, 0, 0, 0},
      {0, 1, 1, 0},
      {1, 1, 0, 0},
      {0, 0, 0, 0}
    }, {
      {1, 0, 0, 0},
      {1, 1, 0, 0},
      {0, 1, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 1, 1, 0},
      {1, 1, 0, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 1, 0, 0},
      {0, 1, 1, 0},
      {0, 0, 1, 0},
      {0, 0, 0, 0}
    }
  };
  mapTypeArray(tempArray, temp.blocks);
  temp.color = setYellow();
  return temp;
}

Type setT() {
  Type temp;
  int tempArray[4][4][4] = {
    {
      {0, 0, 0, 0},
      {1, 1, 1, 0},
      {0, 1, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 1, 0, 0},
      {1, 1, 0, 0},
      {0, 1, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 1, 0, 0},
      {1, 1, 1, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 1, 0, 0},
      {0, 1, 1, 0},
      {0, 1, 0, 0},
      {0, 0, 0, 0}
    }
  };
  mapTypeArray(tempArray, temp.blocks);
  temp.color = setBlue();
  return temp;
}

Type setZ() {
  Type temp;
  int tempArray[4][4][4] = {
    {
      {0, 0, 0, 0},
      {1, 1, 0, 0},
      {0, 1, 1, 0},
      {0, 0, 0, 0}
    }, {
      {0, 1, 0, 0},
      {1, 1, 0, 0},
      {1, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {1, 1, 0, 0},
      {0, 1, 1, 0},
      {0, 0, 0, 0},
      {0, 0, 0, 0}
    }, {
      {0, 0, 1, 0},
      {0, 1, 1, 0},
      {0, 1, 0, 0},
      {0, 0, 0, 0}
    }
  };
  mapTypeArray(tempArray, temp.blocks);
  temp.color = setYellow();
  return temp;
}
// Color setters.
Color setGreen() {
 Color temp;
 temp.r = 0;
 temp.g = 220;
 temp.b = 0;
 temp.a = 255;
 return temp;
}

Color setBlue() {
  Color temp;
  temp.r = 0;
  temp.g = 0;
  temp.b = 220;
  temp.a = 255;
  return temp;
}

Color setRed() {
  Color temp;
  temp.r = 220;
  temp.g = 0;
  temp.b = 0;
  temp.a = 255;
  return temp;
}

Color setYellow() {
  Color temp;
  temp.r = 220;
  temp.g = 220;
  temp.b = 0;
  temp.a = 255;
  return temp;
}

Color setEmpty() {
  Color temp;
  temp.r = 193;
  temp.g = 189;
  temp.b = 172;
  temp.a = 255;
  return temp;
}

void mapTypeArray(int from[4][4][4], int to[4][4][4]) {
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 4; j++) {
      for (size_t k = 0; k < 4; k++) {
        to[i][j][k] = from[i][j][k];
      }
    }
  }
}
