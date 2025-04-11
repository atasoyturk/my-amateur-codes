#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 yearly rate 0.022
 montly rate 0.002
 daily rate 0.0002
*/
float unit = 1000; 

void checkBalance();
void depositMoney();
void withdrawMoney();
void compYearly();
void compMonthly();
void compDaily();

int main()
{
    int choice;

    do {
        printf("\n\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Calculate Compound Yearly Interest");
        printf("\n5. Calculate Compound Monthly Interest");
        printf("\n6. Calculate Compound Daily Interest");
        printf("\n7. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance();
            break;
        case 2:
            depositMoney();
            break;
        case 3:
            withdrawMoney();
            break;
        case 4:
            compYearly();
            break;
        case 5:
            compMonthly();
            break;
        case 6:
            compDaily();
            break;
        case 7:
            printf("Exiting...");
            break;
        default:
            printf("Invalid choice! Please try again.");
        }
    } while (choice != 7);

    return 0;
}

void checkBalance()
{
    printf("\nYour current balance is: %.2f units", unit);
}

void depositMoney()
{
    int deposit;
    printf("\nEnter amount of the deposit: ");
    scanf("%d", &deposit);
    unit += deposit;
    printf("\nYour new balance is: %.2f", unit);
}

void withdrawMoney()
{
    int withdraw;
    printf("\nEnter amount of the withdrawal: ");
    scanf("%d", &withdraw);
    if (withdraw > unit)
    {
        printf("\nInsufficient funds!");
    }
    else
    {
        unit -= withdraw;
        printf("\nYour new balance is: %.2f", unit);
    }
}

void compYearly()
{
    int years;
    float rate = 0.022; 
    printf("\nEnter number of years: ");
    scanf("%d", &years);
    float amount = unit * pow(1 + rate, years);
    printf("\nThe total amount after %d years is: %.2f units", years, amount);
}

void compMonthly()
{
    int months;
    float rate = 0.002; 
    printf("\nEnter number of months: ");
    scanf("%d", &months);
    float amount = unit * pow(1 + rate, months);
    printf("\nThe total amount after %d months is: %.2f units", months, amount);
}

void compDaily()
{
    int days;
    float rate = 0.0002; 
    printf("\nEnter number of days: ");
    scanf("%d", &days);
    float amount = unit * pow(1 + rate, days);
    printf("\nThe total amount after %d days is: %.2f units", days, amount);
}
