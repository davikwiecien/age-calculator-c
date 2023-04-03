#include "sum_days.h"

void sum_days(uint32_t *days, uint16_t start_month, uint16_t final_month, uint16_t year) {

    for(uint16_t month = start_month; month <= final_month; ++month)
        *days += month_days(month, year);

}
