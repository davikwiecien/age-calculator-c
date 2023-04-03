#include "greater_date.h"

bool greater_date(struct Date *date1, struct Date *date2, bool is_calculating_next_birthday) {

    if(is_calculating_next_birthday)
         return date1->month < date2->month || (date1->month == date2->month && date1->day < date2->day);

    return date1->year < date2->year ||
        (date1->year == date2->year && date1->month < date2->month) ||
        (date1->year == date2->year && date1->month == date2->month && date1->day < date2->day);

}

