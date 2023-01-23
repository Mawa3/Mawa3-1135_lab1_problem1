#include <stdio.h>

int main()
{
    int days, years, months, weeks, n;
    printf("number of days: ");
    scanf("%d", &days);

    years = days/365;
    n = days % 365;
    months = n / 30;
    n = n % 30;
    weeks = n / 7;
    days = n % 7;

if (years != 0)
    { printf("Years: %d\t", years);

}
if (months != 0)
    { printf("Months: %d\t", months);

}
if (weeks != 0)
    { printf("Weeks: %d\t", weeks);

}

if (days != 0)
{

printf("Days: %d\t", days);

}

    return 0;
}
