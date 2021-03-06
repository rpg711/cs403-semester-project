#pragma once
#define USE_CMATH_DEFINES // for math constants

#include <cmath>

/*
  Static general helper functions go here.
*/

namespace util 
{
  /*
    @brief Constrain an angle between -pi, pi
    @param x input angle (radians)
  */
  static float ConstrainAngle(float x)
  {
    while (x < -M_PI)
    {
      x += 2 * M_PI;
    }

    while (x > M_PI)
    {
      x -= 2 * M_PI;
    }

    return x;
  }

}