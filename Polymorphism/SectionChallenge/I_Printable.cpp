#include "I_Printable.h"

ostream &operator<<(ostream &os, const I_Printable &object) {
    object.print(os);
    return os;
}