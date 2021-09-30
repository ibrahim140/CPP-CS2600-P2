#include <stdio.h>

int getTripDays()
{
    int numOfDays;
   
    printf("Please input the number of days you spent on the trip.");

    scanf("%d", &numOfDays);

    while (numOfDays <= 0)
    {
        printf("Sorry, that is not a valid input. Please input a value greater than 0.");
        numOfDays = scanf("%d", &numOfDays);
    }

    return numOfDays;
}