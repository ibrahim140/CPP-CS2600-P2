/*
Functions that will display the total expenses, the total allowed expenses covered by the company,
and the finally the amount saved or needed to be reimbursed by the employee.
*/

#include <stdio.h>


/*
 * This function displays the total expenses for the trip.
 * 
 * Parameters: totalExpense is the total amount of expenses over the trip
 * Return: Nothing is returned, total amount is displayed
 */
void displayTotalExpenses(float totalExpense){
    printf("\nThe total expenses incurred by the businessperson is $%.2f.\n", totalExpense);
}


/*
 * This function displays the total allowed expenses for the trip that will be covered by the
 * company.
 * 
 * Parameters: allowedExpense is the  amount of expenses covered by the company
 * Return: Nothing is returned, allowed expenses are displayed
 */
void displayAllowedExpenses(float allowedExpense){
    printf("The total allowed expenses for the trip is $%.2f.\n", allowedExpense);
}


/*
 * This function displays whether the total expenses over the trip was more or less
 * than the expenses covered by the company.
 * 
 * Parameters: allowedExpense is the amount covered by the company, totalExpense is the total
 *              amount of expense over the trip
 * Return: Nothing is returned; function will display whether the employee was under or over
 *          the allowed expenses.
 */
void finalTotalExpenses(float totalExpense, float allowedExpense){
    float finalTotal = allowedExpense - totalExpense;

    if(finalTotal < 0){
        printf("The excess expenses that must be reimbursed by the businessperson is $%.2f.\n", (finalTotal*-1));
    }else if(finalTotal > 0){
        printf("The amount saved by the businessperson is $%.2f.\n", finalTotal);
    }else{
        printf("The total expenses are equal to the allowed expenses, no reimbursal required.\n");
    }
}