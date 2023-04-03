#include "calculate_months.h"

void calculate_months(struct Result *result, struct Date *earliest_date, struct Date *latest_date) {

    if(latest_date->month >= earliest_date->month)
        result->months = latest_date->month - earliest_date->month;
    else {
        result->months = 12 - earliest_date->month + latest_date->month;
        if(earliest_date->year != latest_date->year)
            --(result->total_years);
    }

}
