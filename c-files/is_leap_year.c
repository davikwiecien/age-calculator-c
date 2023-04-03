#include "is_leap_year.h"

bool is_leap_year(uint16_t year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
