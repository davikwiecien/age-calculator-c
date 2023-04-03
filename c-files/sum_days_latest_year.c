#include "sum_days_latest_year.h"

void sum_days_latest_year(struct Date *earliest_date, struct Date *latest_date, uint32_t *total_days) {

    sum_days(total_days, 0, latest_date->month - 1, latest_date->year);
    subtract_days(total_days, month_days(latest_date->month - 1, latest_date->year) - latest_date->day);

    // If true, sum_days_between_total_years() function was not called and the "total_years" from "result" are 0
    if(earliest_date->year == latest_date->year)
        subtract_days(total_days, is_leap_year(earliest_date->year) ? 366 : 365);

}
