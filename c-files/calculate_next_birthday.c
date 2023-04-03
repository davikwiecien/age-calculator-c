#include "calculate_next_birthday.h"

void calculate_next_birthday(struct Result *result, struct Date *earliest_date, struct Date *latest_date) {

    struct Date next_birthday_date = {earliest_date->day, earliest_date->month};
    bool flag = false;

    // Here, the short-circuit will be used to assign "true" to "flag"
    if(is_29_feb(earliest_date) && ((latest_date->month >= 3 && !is_leap_year(latest_date->year + 1)) ||
        (is_29_feb(latest_date) && (flag = true)) || (latest_date->month <= 2 && !is_leap_year(latest_date->year)))) {
        next_birthday_date.day = 1;
        next_birthday_date.month = 3;
    }

    if(!flag && greater_date(latest_date, &next_birthday_date, true)) {
        next_birthday_date.year = latest_date->year;
        sum_days(&result->next_birthday, latest_date->month - 1, next_birthday_date.month - 1, next_birthday_date.year);
    }
    else {
        next_birthday_date.year = latest_date->year + 1;
        sum_days(&result->next_birthday, latest_date->month - 1, 11, latest_date->year);
        sum_days(&result->next_birthday, 0, next_birthday_date.month - 1, next_birthday_date.year);
    }

    subtract_days(&result->next_birthday, latest_date->day);
    subtract_days(&result->next_birthday, month_days(next_birthday_date.month - 1, next_birthday_date.year) - next_birthday_date.day);

    if((latest_date->day == 1 && latest_date->month == 3 && !is_leap_year(latest_date->year) && is_29_feb(earliest_date)) ||
        are_equal_dates(earliest_date, latest_date, true))
        result->is_birthday = true;

}
