#include "sum_days_earliest_year.h"

void sum_days_earliest_year(struct Date *earliest_date, uint32_t *total_days) {

    sum_days(total_days, earliest_date->month - 1, 11, earliest_date->year);
    subtract_days(total_days, earliest_date->day);

}
