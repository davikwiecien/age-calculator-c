#include "are_equal_dates.h"

bool are_equal_dates(struct Date *date1, struct Date *date2, bool is_calculating_next_birthday) {

    if(is_calculating_next_birthday)
        return date1->day == date2->day && date1->month == date2->month;

    return date1->day == date2->day && date1->month == date2->month && date1->year == date2->year;

}
