#include <stdio.h>

float TaxiFee () {
    float fee;
    printf("\nHow much was paid in taxi fees this day? ");
    scanf("%f", &fee);
    while (fee < 0) {
        printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
        printf("\nHow much was paid in taxi fees this day? ");
        scanf("%f", &fee);
    }
    return fee; 
}

float TaxiFeeMultiDays (int days) {
    float fee = 0, dayFee;
    for (int i = 0; i < days; i++) {
        printf("\nHow much was paid in taxi fees on day %d? ", i+1);
        scanf("%f", &dayFee);
        while (dayFee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in taxi fees on day %d? ", i+1);
            scanf("%f", &dayFee);
        }
        fee += dayFee;
    }
    return fee; 
}

float HotelFee () {
    float fee;
    printf("\nHow much was paid in hotel fees this day? ");
    scanf("%f", &fee);
    while (fee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in hotel fees this day? ");
            scanf("%f", &fee);
    }
    return fee; 
}

float HotelFeeMultiDays (int days) {
    float fee = 0, dayFee;
    for (int i = 0; i < days; i++) {
        printf("\nHow much was paid in hotel fees on day %d? ", i+1);
        scanf("%f", &dayFee);
        while (dayFee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in hotel fees on day %d? ", i+1);
            scanf("%f", &dayFee);
        }
        fee += dayFee;
    }
    return fee; 
}

float ParkingFee () {
    float fee;
    printf("\nHow much was paid in parking fees this day? ");
    scanf("%f", &fee);
    while (fee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in parking fees this day? ");
            scanf("%f", &fee);
    }
    return fee; 
}

float ParkingFeeMultiDays (int days) {
    float fee = 0, dayFee;
    for (int i = 0; i < days; i++) {
        printf("\nHow much was paid in parking fees on day %d? ", i+1);
        scanf("%f", &dayFee);
        while (dayFee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in parking fees on day %d? ", i+1);
            scanf("%f", &dayFee);
        }
        fee += dayFee;
    }
    return fee; 
}

float ConferenceFee () {
    float fee;
    printf("\nHow much was paid in conference fees this day? ");
    scanf("%f", &fee);
    while (fee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in conference fees this day? ");
            scanf("%f", &fee);
    }
    return fee; 
}

float ConferenceFeeMultiDays (int days) {
    float fee = 0, dayFee;
    for (int i = 0; i < days; i++) {
        printf("\nHow much was paid in conference fees on day %d? ", i+1);
        scanf("%f", &dayFee);
        while (dayFee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in conference fees on day %d? ", i+1);
            scanf("%f", &dayFee);
        }
        fee += dayFee;
    }
    return fee;

    //meals function:
    

}

//meals function
float mealCosts(int amountOfDays, int arrivalTime, int departureTime)
{
    int breakfast = 9, lunch = 12, dinner = 16;
    float totalMealCosts, totalSpentOnFood;
    printf("Please enter the amount of Allowable Meals: ");
    scanf("%f", &totalMealCosts);

    printf("Please enter the amount spent on food; ");
    scanf("%f", &totalSpentOnFood);

    while(totalMealCosts <= 0)
    {
        printf("Please enter a valid amount: ")
        scanf("%f", &totalMealCosts);
    }
    
    // meals are allowed if departure time is before 7 am, 12 pm, & 6 pm
    // if-else-if structure for meals on first day of trip (departure)
    if(departureTime <= 7)
    {
        totalMealCosts -= breakfast;
    }
    else if ((departureTime > 7) && (departureTime <= 12))
    {
        totalMealCosts -= lunch;
    }
    else if ((departureTime > 12) && (departureTime <= 18))
    {
        totalMealCosts -= dinner;
    }
    
    // meals are allowed if arrival time is after 8 am, 1 pm, & 7 pm
    // if-else-if structure for meals on last day of trip (arrival)
    if(arrivalTime > 8)
    {
        totalMealCosts -= breakfast;
    }
    else if (arrivalTime > 13)
    {
        totalMealCosts -= lunch;
    }
    else if (arrivalTime > 19)
    {
        totalMealCosts -= dinner;
    }

    /* return the total meal costs after removing the amount that the company would cover
        if the value is positive, then you need to reimburrse, if negative, you saved. */
    return (totalMealCosts -= (amountOfDays*(breakfast + lunch + dinner)));
}