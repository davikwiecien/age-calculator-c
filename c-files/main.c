#include <stdio.h>
#include <stdlib.h>
#include "Date.h"
#include "Result.h"
#include "read_date.h"
#include "greater_date.h"
#include "calculate_result.h"
#include "print_result.h"

int main(void) {

    struct Result result = {0};
    struct Date date1, date2;

    read_date(&date1, "Enter your date of birth");
    read_date(&date2, "Enter another date");

    greater_date(&date1, &date2, false) ? calculate_result(&result, &date1, &date2) : calculate_result(&result, &date2, &date1);
    print_result(&result);

    return EXIT_SUCCESS;

}
