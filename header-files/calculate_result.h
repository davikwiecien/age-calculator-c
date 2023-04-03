#include <limits.h>
#include "Date.h"
#include "Result.h"
#include "calculate_next_birthday.h"
#include "are_equal_dates.h"
#include "sum_days_earliest_year.h"
#include "sum_days_between_years.h"
#include "sum_days_latest_year.h"
#include "calculate_months.h"
#include "calculate_days.h"

void calculate_result(struct Result *result, struct Date *earliest_date, struct Date *latest_date);
