/*
    This file contains the functions which will get the user inputs for trip days, departure time,
     arrival time, miles driven, airfare, and  car rental fee
*/

#include <stdio.h>

//FUNCTION DECLARATIONS
int getTripDays();
float milesDriven();
int departureTime();
int arrivalTime();
float airfare();
float carRental();


//FUNCTION DEFINITIONS

/* Gets the total number of days spent on the trip by user input.
   Does not accept 0 as an input as per assignment instructions.
   Returns this value as an int.
*/
int getTripDays()               
{
    int numOfDays;
   
    printf("Please input the number of days you spent on the trip: ");

    scanf("%d", &numOfDays);

    while (numOfDays <= 0)
    {
        printf("Sorry, that is not a valid input. Please input a value greater than 0: ");
        scanf("%d", &numOfDays);
    }

    return numOfDays; //Returns number of days as an INT
}


/*  Gets miles driven from user and calculates vehicle expense.
    Returns this value as a float. Does not accept negative numbers.
*/
float milesDriven()
{
    float numOfMiles;
    float vehicleExpense;

    printf("\nPlease input the number of miles driven if a private vehicle was used: ");

    scanf("%f", &numOfMiles);

    while (numOfMiles < 0.0)
    {
        printf("Sorry that is not a valid input. Please enter a non-negative value: ");
        scanf("%f", &numOfMiles);
    }

    vehicleExpense = (numOfMiles * 0.27); //Calculate the vehicle expense as $0.27 per mile driven.

    return vehicleExpense; //Returns vehicle expense as a FLOAT
}


/* Retrieves departure time for first day of the trip via user input.
   Utilizes military time (0-23) for hours.
   Returns this value as an int.
*/
int departureTime()
{
    int departTime;

    printf("\nPlease input the departure time on the first day. Please round down to the closest hour.\n"
           "Please use military time (i.e. 12:00 AM = 0 / 11 PM = 23.)\n");

    scanf("%d", &departTime);

    while (departTime < 0 || departTime > 23)
    {
        printf("\nSorry that is not a valid input. Please enter following military time and round down "
                "to the last hour.\n(For example, 2:30 PM = 14.)\n");
        scanf("%d", &departTime);
    }
    
    return departTime; //Returns DEPARTURE time in MILITARY TIME (INT)
}


/* Retrieves arrival time for last day of the trip via user input.
   Utilizes military time (0-23) for hours.
   Returns this value as an int.
*/
int arrivalTime() 
{
    int arrivalTime;

    printf("\nPlease input the arrival time on the last day. Please round down to the closest hour.\n"
           "Please use military time (i.e. 12:00 AM = 0 / 11 PM = 23.)\n");

    scanf("%d", &arrivalTime);

    while (arrivalTime < 0 || arrivalTime > 23)
    {
        printf("\nSorry that is not a valid input. Please enter following military time and round down "
               "to the last hour.\n(For example, 2:30 PM = 14.)\n");
        scanf("%d", &arrivalTime);
    }
    
    return arrivalTime; //Returns ARRIVAL time in MILITARY TIME (INT)
}


/* Retirves cost of any round-trip airfare via user input.
   Returns this value as a float.
*/
float airfare()
{
    float airfareCost;

    printf("\nPlease enter the total cost of your round-trip airfare."
            "For example, if you spent $100.50, simply enter \"100.50\".\n$");

    scanf("%f", &airfareCost);

    while (airfareCost < 0.0)
    {
        printf("\nSorry that is not a valid input. Please enter a "
        "non-negative value.\n$");
        scanf("%f", &airfareCost);
    }

    return airfareCost; //Returns total cost as a FLOAT
}


/* Retrieves cost of any car rentals via user input.
   Returns this value as a float.
*/
float carRental()
{
    float carRentalCost;

    printf("\nPlease enter the total cost of any car rentals."
            "For example, if you spent $100.50, simply enter \"100.50\".\n$");

    scanf("%f", &carRentalCost);

    while (carRentalCost < 0.0)
    {
        printf("\nSorry that is not a valid input. Please enter a "
        "non-negative value.\n$");
        scanf("%f", &carRentalCost);
    }

    return carRentalCost; //Returns total cost as a FLOAT
}