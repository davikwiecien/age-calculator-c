#include "calculate_days.h"

void calculate_days(struct Result *result, struct Date *earliest_date, struct Date *latest_date) {

    if(latest_date->day >= earliest_date->day)
        result->days = latest_date->day - earliest_date->day;
    else {
        result->days = ((latest_date->month == 1 ? 31 : month_days(latest_date->month - 2,
            latest_date->year)) - earliest_date->day) + latest_date->day;
        if(result->months != 0)
            --(result->months);
        else {
            result->months = 11;
            --(result->total_years);
        }
    }

}
