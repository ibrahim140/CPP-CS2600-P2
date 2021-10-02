#include <stdio.h>

//FUNCTION DECLARATIONS
int getTripDays();
float milesDriven();
int departureTime();
int arrivalTime();
float airfare();
float carRental();


//FUNCTION DEFINITIONS
int getTripDays() //Gets the total number of days spent on the trip.
                  //Does not accept 0 as an input as per assignment instructions.               
{
    int numOfDays;
   
    printf("Please input the number of days you spent on the trip.");

    scanf("%d", &numOfDays);

    while (numOfDays <= 0)
    {
        printf("Sorry, that is not a valid input. Please input a value greater than 0.");
        numOfDays = scanf("%d", &numOfDays);
    }

    return numOfDays; //Returns number of days as an INT
}



float milesDriven() //Gets miles driven from user and calculates vehicle expense.
                    //Returns this as a FLOAT. Does not accept negative numbers.
{
    float numOfMiles;
    float vehicleExpense;

    printf("Please input the number of miles driven if a private vehicle was used.");

    scanf("%f", &numOfMiles);

    while (numOfMiles < 0.0)
    {
        printf("Sorry that is not a valid input. Pleas enter a non-negative value.");
        scanf("%f", &numOfMiles);
    }

    vehicleExpense = (numOfMiles * 0.27); //Calculate the vehicle expense as $0.27 per mile driven.

    return vehicleExpense; //Returns vehicle expense as a FLOAT
}



int departureTime() //Retrives DEPARTURE time for FIRST day of the trip.
{
    int departTime;

    printf("\nPlease input the departure time on the first day. Please round down to the closest hour.\n"
           "Please use military time (i.e. 12:00 AM = 0 / 11 PM = 23.\n");

    scanf("%d", &departTime);

    while (departTime < 0 || departTime > 23)
    {
        printf("\nSorry that is not a valid input. Please enter following military time and round down "
                "to the last hour.\nFor example, 2:30 PM = 14.\n");
        scanf("%d", &departTime);
    }
    
    return departTime; //Returns DEPARTURE time in MILITARY TIME (INT)
}



int arrivalTime() //Retrieves ARRIVAL time back home on the LAST day of the trip
{
    int arrivalTime;

    printf("\nPlease input the arrival time on the last day. Please round down to the closest hour.\n"
           "Please use military time (i.e. 12:00 AM = 0 / 11 PM = 23.\n");

    scanf("%d", &arrivalTime);

    while (arrivalTime < 0 || arrivalTime > 23)
    {
        printf("\nSorry that is not a valid input. Please enter following military time and round down "
               "to the last hour.\nFor example, 2:30 PM = 14.\n");
        scanf("%d", &arrivalTime);
    }
    
    return arrivalTime; //Returns ARRIVAL time in MILITARY TIME (INT)
}

float airfare() //Retrieves and returns cost of any round-trip airfare
{
    float airfareCost;

    printf("\nPlease enter the total cost of any round-trip airefare."
            "For example, if you spent $100.50, simply enter \"100.50\".\n$");

           scanf("%f", airfareCost);

           while (airfareCost < 0.0)
           {
               printf("\nSorry that is not a valid input. Pleas enter a "
               "non-negative value.\n$");
               scanf("%f", &airfareCost);
           }

    return airfareCost; //Returns total cost as a FLOAT
}

float carRental() //Retrieves and returns cost of any car rentals.
{
    float carRentalCost;

    printf("\nPlease enter the total cost of any car rentals."
            "For example, if you spent $100.50, simply enter \"100.50\".\n$");

           scanf("%f", carRentalCost);

           while (carRentalCost < 0.0)
           {
               printf("\nSorry that is not a valid input. Pleas enter a "
               "non-negative value.\n$");
               scanf("%f", &carRentalCost);
           }

    return carRentalCost; //Returns total cost as a FLOAT
}