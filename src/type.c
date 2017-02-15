#include "type.h"
// Type setters.
Type setI() {
  Type temp;
  temp.blocks = {
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
  }
  temp.color = setBlue();
  return temp;
}

Type setJ() {
  Type temp;
  temp.blocks = {
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
  }
  temp.color = setGreen();
  return temp;
}

Type setL() {
  Type temp;
  temp.blocks = {
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
  }
  temp.color = setGreen();
  return temp;
}

Type setO() {
  Type temp;
  temp.blocks = {
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
  }
  temp.color = setRed();
  return temp;
}

Type setS() {
  Type temp;
  temp.blocks = {
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
  }
  temp.color = setYellow();
  return temp;
}

Type setT() {
  Type temp;
  temp.blocks = {
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
  }
  temp.color = setBlue();
  return temp;
}

Type setZ() {
  Type temp;
  temp.blocks = {
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
  }
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
  temp.r = 230;
  temp.g = 210;
  temp.b = 225;
  temp.a = 255;
  return temp;
}
