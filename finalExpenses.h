/*
Functions that will display the total expenses, the total allowed expenses covered by the company,
and the finally the amount saved or needed to be reimbursed by the employee.
*/

#include <stdio.h>

void displayTotalExpenses(float totalExpense){
    printf("\nThe total expenses incurred by the businessperson were $%.2f.\n", totalExpense);
}

void displayAllowedExpenses(float allowedExpense){
    printf("The total allowed expenses for the trip are $%.2f.\n", allowedExpense);
   
}

void finalTotalExpenses(float totalExpense, float allowedExpense){
    float finalTotal = allowedExpense - totalExpense;

    if(finalTotal < 0){
        printf("The excess expenses that must be reimbursed by the businessperson are $%.2f.\n", (finalTotal*-1));
    }else if(finalTotal > 0){
        printf("The amount saved by the businessperson was $%.2f.\n", finalTotal);
    }else{
        printf("The total expenses were equal to the allowed expenses, no reimbursal needed.\n");
    }
}