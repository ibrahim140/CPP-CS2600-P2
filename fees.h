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
}

//meals function
float mealCosts(int arrivalTime, int departureTime, float *firstMeal, float *secondMeal)
{
    float firstAllowedMealCost, secondAllowedMealCost;
    const int BREAKFAST = 9, LUNCH = 12, DINNER = 16;
    int mealCostCovered = 0;

    // meals are allowed if departure time is before 7 am, 12 pm, & 6 pm
    // if-else-if structure for meals on first day of trip (departure)
    if(departureTime > 0 && departureTime <= 7)
    {   
        printf("\nHow much was breakfast before departure: $");
        scanf("%f", &firstAllowedMealCost);
        *firstMeal = firstAllowedMealCost;
        if(firstAllowedMealCost < BREAKFAST)
        {
            mealCostCovered += firstAllowedMealCost;
        }
        else
        {
            mealCostCovered += BREAKFAST;
        }   
    }

    else if ((departureTime > 7) && (departureTime <= 12))
    {
        printf("\nHow much was Lunch before departure: $");
        scanf("%f", &firstAllowedMealCost);
        *firstMeal = firstAllowedMealCost;
        if(firstAllowedMealCost < LUNCH)
        {
            mealCostCovered += firstAllowedMealCost;
        }
        else
        {
            mealCostCovered += LUNCH;
        }
    }
    else if ((departureTime > 12) && (departureTime <= 18))
    {
        printf("\nHow much was Dinner before departure: $");
        scanf("%f", &firstAllowedMealCost);
        *firstMeal = firstAllowedMealCost;
        if(firstAllowedMealCost < DINNER)
        {
            mealCostCovered += firstAllowedMealCost;
        }
        else
        {
            mealCostCovered += DINNER;
        }
    }
    
    // meals are allowed if arrival time is after 8 am, 1 pm, & 7 pm
    // if-else-if structure for meals on last day of trip (arrival)
    if(arrivalTime >= 8 && arrivalTime < 13)
    {
        printf("\nHow much was breakfast before arrival: $");
        scanf("%f", &secondAllowedMealCost);
        if(secondAllowedMealCost < BREAKFAST)
        {
            mealCostCovered += secondAllowedMealCost;
        }
        else
        {
            mealCostCovered += BREAKFAST;
        }   
    }
    else if (arrivalTime > 13 && arrivalTime < 19)
    {
        printf("\nHow much was Lunch before arrival: $");
        scanf("%f", &secondAllowedMealCost);
        if(secondAllowedMealCost < LUNCH)
        {
            mealCostCovered += secondAllowedMealCost;
        }
        else
        {
            mealCostCovered += LUNCH;
        }
    }
    else if (arrivalTime > 19 && arrivalTime < 24)
    {
        printf("\nHow much was Dinner before arrival: $");
        scanf("%f", &secondAllowedMealCost);
        if(secondAllowedMealCost < DINNER)
        {
            mealCostCovered += secondAllowedMealCost;
        }
        else
        {
            mealCostCovered += DINNER;
        }
    }

    return mealCostCovered;
}