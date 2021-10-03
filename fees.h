#include <stdio.h>

float TaxiFee () {
    float fee;
    printf("\nHow much was paid in taxi fees this day?: $");
    scanf("%f", &fee);
    while (fee < 0) {
        printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
        printf("\nHow much was paid in taxi fees this day? ");
        scanf("%f", &fee);
    }
    return fee; 
}

float HotelFee () {
    float fee;
    printf("\nHow much was paid in hotel fees this day?: $");
    scanf("%f", &fee);
    while (fee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in hotel fees this day? ");
            scanf("%f", &fee);
    }
    return fee; 
}

/*
    Function to get the amount paid for parking fees
    intended to get total parking fees for each day
    returns fee (complete parking fee)
*/
float ParkingFee () {
    float fee;
    printf("\nHow much was paid in parking fees this day?: $");
    scanf("%f", &fee);
    while (fee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in parking fees this day? ");
            scanf("%f", &fee);
    }
    return fee; 
}

/*
    Function to get the amount paid for conference fees
    intended to get total amount spent on conference fees each day
    returns fee (complete conference fee)
*/
float ConferenceFee () {
    float fee;
    printf("\nHow much was paid in conference fees this day? $");
    scanf("%f", &fee);
    while (fee < 0) {
            printf("\nInvalid input! fee should be from 0 to %d (though hopefully not that far).", __INT_MAX__);
            printf("\nHow much was paid in conference fees this day? ");
            scanf("%f", &fee);
    }
    return fee; 
}

/*
    mealCost function - takes in arrival time and departure time as well as pointers to the first
        meal and second meal prices (for the allowed meals)
    this method is intended to return the total value that the company will cover for the allowed meals
    returns amount of meal cost(s) if price is under allowed meal cost for each meal
        or returns only the amount covered if the meal cost is more than the allowed limit.
*/
float mealCosts(int arrivalTime, int departureTime, float *firstMeal, float *secondMeal)
{
    float firstAllowedMealCost, secondAllowedMealCost;
    const int BREAKFAST = 9, LUNCH = 12, DINNER = 16;
    int mealCostCovered = 0;

    // meals are allowed if departure time is before 7 am, 12 pm, & 6 pm
    // if-else-if structure for meals on first day of trip (departure)
    if(departureTime > 0 && departureTime <= 7)
    {   // ask user for price of breakfast
        printf("\nHow much was breakfast before departure: $");
        scanf("%f", &firstAllowedMealCost);
        *firstMeal = firstAllowedMealCost;
        if(firstAllowedMealCost < BREAKFAST)
        {
            // return amount of meal cost
            mealCostCovered += firstAllowedMealCost;
        }
        else
        {
            // return allowed amount
            mealCostCovered += BREAKFAST;
        }   
    }
    else if ((departureTime > 7) && (departureTime <= 12))
    {   // ask user for price of lunch
        printf("\nHow much was Lunch before departure: $");
        scanf("%f", &firstAllowedMealCost);
        *firstMeal = firstAllowedMealCost;
        if(firstAllowedMealCost < LUNCH)
        {
            // return amount of meal cost
            mealCostCovered += firstAllowedMealCost;
        }
        else
        {
            // return allowed amount
            mealCostCovered += LUNCH;
        }
    }
    else if ((departureTime > 12) && (departureTime <= 18))
    {   // ask user for price of dinner
        printf("\nHow much was Dinner before departure: $");
        scanf("%f", &firstAllowedMealCost);
        *firstMeal = firstAllowedMealCost;
        if(firstAllowedMealCost < DINNER)
        {
            // return amount of meal cost
            mealCostCovered += firstAllowedMealCost;
        }
        else
        {
            // return allowed amount
            mealCostCovered += DINNER;
        }
    }
    
    // meals are allowed if arrival time is after 8 am, 1 pm, & 7 pm
    // if-else-if structure for meals on last day of trip (arrival)
    if(arrivalTime >= 8 && arrivalTime < 13)
    {   // ask user for price of breakfast
        printf("\nHow much was breakfast before arrival: $");
        scanf("%f", &secondAllowedMealCost);
        *secondMeal = secondAllowedMealCost;
        if(secondAllowedMealCost < BREAKFAST)
        {
            // return amount of meal cost
            mealCostCovered += secondAllowedMealCost;
        }
        else
        {
            // return allowed amount
            mealCostCovered += BREAKFAST;
        }   
    }
    else if (arrivalTime > 13 && arrivalTime < 19)
    {   // ask user for price of lunch
        printf("\nHow much was Lunch before arrival: $");
        scanf("%f", &secondAllowedMealCost);
        *secondMeal = secondAllowedMealCost;        
        if(secondAllowedMealCost < LUNCH)
        {
            // return amount of meal cost
            mealCostCovered += secondAllowedMealCost;
        }
        else
        {
            // return allowed amount
            mealCostCovered += LUNCH;
        }
    }
    else if (arrivalTime > 19 && arrivalTime < 24)
    {   // ask user for price of dinner
        printf("\nHow much was Dinner before arrival: $");
        scanf("%f", &secondAllowedMealCost);
        *secondMeal = secondAllowedMealCost;        
        if(secondAllowedMealCost < DINNER)
        {
            // return amount of meal cost
            mealCostCovered += secondAllowedMealCost;
        }
        else
        {
            // return allowed amount
            mealCostCovered += DINNER;
        }
    }

    // return meal cost covered value to where function is called
    return mealCostCovered;
}