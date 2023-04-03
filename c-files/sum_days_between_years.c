#include "sum_days_between_years.h"

void sum_days_between_years(uint32_t *total_days, uint16_t year) {
    *total_days += is_leap_year(year) ? 366 : 365;
}
