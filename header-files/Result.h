#ifndef RESULT
#define RESULT

#include <stdbool.h>
#include <inttypes.h>

struct Result {

    uint16_t months, days, weeks, days_weeks, total_weeks_days, total_years;
    uint32_t total_months, total_weeks, total_days, hours, next_birthday;
    uint64_t seconds, minutes;
    bool is_birthday;

};

#endif
