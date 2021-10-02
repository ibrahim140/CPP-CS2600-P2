/*
    Authors:  Mohammed Ibrahim, Austin Martinez, Solomon Mollet, Alexander Rodriguez
    Description: This program is designed to get user input to calculate the total for travel expenses. The program asks for total days, car rentals,
     airfare, parking fees, lodging, food, etc.. These values are then taken to perform calculations and display to the user the total expenses incurred, 
     total allowable expenses, and the excess if the person went over the allowed limit OR the amount saved if they stayed under the allowed limit.

*/

#include <stdio.h>
#include "fees.h"
#include "GetsFile.h"

    float totalExpenses, allowableExpenses, extraCharges, expensesSaved;

// make function for displaying
void displayExpenses(/* maybe use struct as parameter*/) // also possible to just use float variables..
{
    printf("\nTotal spent: \t\t%.2f", /*totalExpenses*/);
    printf("\nAllowable Expenses: \t%.2f", /*allowableExpenses*/);
    printf("\nExtra Charges: \t\t%.2f", /*extraCharges*/);
    printf("\nAmount Saved: \t%.2f", /*expensesSaved*/);
}

int main()
{
    /*
        function calls;
    */

    return 0;
}