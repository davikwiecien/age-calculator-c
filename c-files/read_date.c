#include "read_date.h"

void read_date(struct Date *date, const char *prompt) {

    printf("%s (mm/dd/yyyy): ", prompt);
    scanf("%hu/%hu/%hu", &date->month, &date->day, &date->year);

    while(date->year < 1601 || date->year > 9999 || date->month == 0 || date->month > 12 ||
        date->day == 0 || date->day > month_days(date->month - 1, date->year)) {

        printf("Invalid date! Enter a new date (mm/dd/yyyy): ");
        scanf("%hu/%hu/%hu", &date->month, &date->day, &date->year);

    }

}
