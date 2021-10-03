/*
Functions that will display the total expenses, the total allowed expenses covered by the company,
and the finally the amount saved or needed to be reimbursed by the employee.
*/

#include <stdio.h>

void displayTotalExpenses(float totalExpense){
    printf("\nThe total expenses incurred by the businessperson is $%.2f.\n", totalExpense);
}

void displayAllowedExpenses(float allowedExpense){
    printf("The total allowed expenses for the trip is $%.2f.\n", allowedExpense);
}

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