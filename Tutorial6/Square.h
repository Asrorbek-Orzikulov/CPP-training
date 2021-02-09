#ifndef _SQUARE_H_
#define _SQUARE_H_

#include "Rectangle.h"

class Square: public Rectangle {
private:
    static constexpr double def_side = 1.0;
    static constexpr const char *def_color = "green";
    static constexpr bool def_filled = false;

public:
    Square(double side=def_side, string color=def_color, bool filled=def_filled);
    void set_length(double side);
    void set_width(double side);
    void print() const;
};

#endif // _SQUARE_H_