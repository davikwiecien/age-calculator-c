#include "month_days.h"

uint16_t month_days(uint16_t month, uint16_t year) {

    uint16_t days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return month == 1 && is_leap_year(year) ? 29 : days[month];

}
