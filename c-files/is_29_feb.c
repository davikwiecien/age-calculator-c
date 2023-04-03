#include "is_29_feb.h"

bool is_29_feb(struct Date *date) {
    return date->day == 29 && date->month == 2;
}
