#include "print_result.h"

void print_result(struct Result *result) {

    printf("\nFor how long have you lived:\n"
        "\nYears = %hu, months = %hu and days = %hu (weeks = %hu and days = %hu)\n"
        "Months = %u and days = %hu (weeks = %hu and days = %hu)\n"
        "Weeks = %u (and days = %hu)\n"
        "Days = %u\n"
        "Hours = %u\n"
        #ifdef __WIN32
        "Minutes = %I64u\n"
        "Seconds = %I64u\n",
        #elif ULONG_MAX == ULLONG_MAX
        "Minutes = %lu\n"
        "Seconds = %lu\n",
        #else
        "Minutes = %llu\n"
        "Seconds = %llu\n",
        #endif
        result->total_years, result->months, result->days,
        result->weeks, result->days_weeks,
        result->total_months, result->days, result->weeks, result->days_weeks,
        result->total_weeks, result->total_weeks_days,
        result->total_days,
        result->hours, result->minutes, result->seconds);

    if(result->is_birthday)
        printf("\nToday is your %huº birthday! Happy Birthday!", result->total_years);
    printf("\nDays to your %uº birthday = %u\n", result->total_years + 1, result->next_birthday);

}
