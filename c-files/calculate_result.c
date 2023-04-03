#include "calculate_result.h"

void calculate_result(struct Result *result, struct Date *earliest_date, struct Date *latest_date) {

    // The days until the next birthday are calculated first
    calculate_next_birthday(result, earliest_date, latest_date);

    if(are_equal_dates(earliest_date, latest_date, false))
        return;

    sum_days_earliest_year(earliest_date, &result->total_days);

    for(uint16_t year_step = 1; earliest_date->year + year_step < latest_date->year; ++year_step)
        sum_days_between_years(&result->total_days, earliest_date->year + year_step);

    sum_days_latest_year(earliest_date, latest_date, &result->total_days);

    result->total_years = latest_date->year - earliest_date->year;
    calculate_months(result, earliest_date, latest_date);
    calculate_days(result, earliest_date, latest_date);

    result->hours = result->total_days * 24;
    #if ULONG_MAX == ULLONG_MAX
    result->minutes = result->hours * 60L;
    result->seconds = result->minutes * 60L;
    #else
    result->minutes = result->hours * 60LL;
    result->seconds = result->minutes * 60LL;
    #endif
    result->weeks = result->days / 7;
    result->days_weeks = result->days - 7 * result->weeks;
    result->total_weeks = result->total_days / 7;
    result->total_weeks_days = result->total_days % 7;
    result->total_months = result->total_years * 12 + result->months;

}
