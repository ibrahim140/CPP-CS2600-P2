/*
    Authors:  Mohammed Ibrahim, Austin Martinez, Solomon Mollet, Alexander Rodriguez
    Description: This program is designed to get user input to calculate the total for travel expenses. The program asks for total days, car rentals,
     airfare, parking fees, lodging, food, etc.. These values are then taken to perform calculations and display to the user the total expenses incurred, 
     total allowable expenses, and the excess if the person went over the allowed limit OR the amount saved if they stayed under the allowed limit.
*/

// #include guards
#include <stdio.h>
#include "../include/fees.h"
#include "../include/GetsFile.h"
#include "../include/finalExpenses.h"
#include "../include/allowedExpenses.h"

int main()
{
    // decalre/initialize all local variables
    int totalDays, arrival_Time, departure_Time;
    float airFare, carRentalFee, privateVehicleExpense, totalMealCost, waivedMealCost;
    float regFee, parkingFees, taxiFees, hotelExpenses;
    float coveredExpenses = 0, totalExpenses = 0;
    float firstAllowedMeal, secondAllowedMeal;
    float* firstMeal = &firstAllowedMeal;
    float* secondMeal = &secondAllowedMeal;

    // call functions to get total days spent on trip, departure time and arrival time
    totalDays = getTripDays();
    departure_Time = departureTime();
    arrival_Time = arrivalTime();

    // Flat fees not based on number of days.
    airFare = airfare();        //completely covered by company
    carRentalFee = carRental(); //completely covered by company
    privateVehicleExpense = milesDriven(); //completely covered by company
    waivedMealCost = mealCosts(arrival_Time, departure_Time, firstMeal, secondMeal);

    // add values to total expenses incurred over trip
    totalExpenses = airFare + carRentalFee + privateVehicleExpense + 
                totalMealCost + firstAllowedMeal + secondAllowedMeal; 
    // fees covered by the company
    coveredExpenses = airFare + carRentalFee + privateVehicleExpense + waivedMealCost; 

    // Fees based on the number of days.
    for(int i = 0; i < totalDays; i++){
        printf("\nFees for day %d:\n", i+1);
        taxiFees = TaxiFee();
        coveredExpenses += allowedTaxiFee(taxiFees);

        hotelExpenses = HotelFee();
        coveredExpenses += allowedHotelExpenses(hotelExpenses);

        parkingFees = ParkingFee();
        coveredExpenses += allowedParkingFee(parkingFees);

        regFee = ConferenceFee();
        coveredExpenses += regFee;

        totalExpenses += (taxiFees + hotelExpenses + parkingFees + regFee);
    }

    /*Insert display functions for total, covered amount,
    and the final reimbursement due.*/
    displayTotalExpenses(totalExpenses);
    displayAllowedExpenses(coveredExpenses);
    finalTotalExpenses(totalExpenses, coveredExpenses);

    return 0;
}