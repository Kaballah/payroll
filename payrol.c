#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    // char firstname[20], lastname[20], staff_no[10];
    int deduction, paye, nhif, nssf, loan, t_deduction, add_income, house_allow, 
    transport_allow, overtime_allow, t_add_income, net_salary, remaining_income, choose;
    int b_salary = 100000;
    int active_loan = 50000;
    char firstname[20] = "Cyber";
    char lastname[20] = "Ghost";
    char staff_no[10] = "kca001";

    // staff details input
    // printf("########################################################\n\n");
    // printf("Please input the staff name: ");
    // scanf("%s", &firstname);
    // printf("\nPlease input the staff name: ");
    // scanf("%s",  &lastname);
    system("clear");
    printf("########################################################\n");
    printf("\nPlease Enter The Staff's ID Number: ");
    scanf("%s", &staff_no);

    system("clear");
    printf("########################################################\n\n");
    printf("\033[0;32m");
    printf("Staff's Name: %s %s\n", firstname, lastname);
    printf("Staff's ID: %s\n", staff_no);
    printf("\033[0m");

    // retreived info
    // system("clear");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
    printf("\033[0;32m");
    printf("Basic Salary = Ksh. %d\n", b_salary);
    printf("Active Loans = Ksh. %d\n", active_loan);
    printf("\033[0m");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");

    // calculations
        //PAYE
    if (b_salary <= 24000) {
        paye = 0.1 * b_salary;
    } else if (b_salary > 24000 && b_salary <= 32333) {
        paye = 0.2 * b_salary;
    } else {
        paye = 0.3 * b_salary;
    }
        // NHIF
    if (b_salary <= 5999) {
        nhif = 150;
    } else if (b_salary > 5999 && b_salary < 7999) {
        nhif = 300;
    } else if (b_salary > 7999 && b_salary < 11999) {
        nhif = 400;
    } else {
        nhif = 500;
    }
    // NSSF
    nssf = 0.05 * b_salary;

    // Loan Deduction
    if (active_loan >= 5000) {
        loan = 5000;
    } else {
        loan = 0;
    }

    // Total Deductions
    t_deduction = paye + nhif + nssf + loan;

    // Ramaining Income
    remaining_income = b_salary - t_deduction;

    printf("\033[0;33m");
    printf("Deductions For %s %s are as follows: \n", firstname, lastname);
    printf("\tPAYE ==> Ksh. %d\n", paye);
    printf("\tNHIF ==> Ksh. %d\n", nhif);
    printf("\tNSSF ==> Ksh. %d\n", nssf);
    printf("\tLoan Payed ==> Ksh. %d\n", loan);
    printf("\tTotal Deductions ==> Ksh. %d\n\n", t_deduction);
    printf("Remaining Salary for %s %s is %d Ksh. \n\n", firstname, lastname, remaining_income);
    printf("\033[0m");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");

    //monetary value assignment 
    printf("Fill in the next three fields correctly...\n\n");
    printf("\tHouse Allowance: Ksh. ");
    scanf("%d", &house_allow);
    printf("\tTransport Allowance: Ksh. ");
    scanf("%d", &transport_allow);
    printf("\tOvertime: Ksh. ");
    scanf("%d", &overtime_allow);

    // Total Allowance
    t_add_income = house_allow + transport_allow + overtime_allow;

    printf("\nTotal Allowance ==> %d \n\n", t_add_income);
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");

    net_salary = b_salary + t_add_income - t_deduction;

    // Main Output
    system("clear");
    printf("\033[0;36m");
    printf("##############################################################\n");
    printf("\t KCA UNIVERSITY WORKER'S PAYSLIP \t\n");
    printf("##############################################################\n");
    printf("---------------------ᴾᵉʳˢᵒⁿᵃˡ ᴵⁿᶠᵒʳᵐᵃᵗⁱᵒⁿ---------------------\n");
    printf("Staff's ID: %s\n", staff_no);
    printf("Staff's Name: %s %s\n", firstname, lastname);
    printf("---------------------ᴵⁿᶜᵒᵐᵉ ᴵⁿᶠᵒʳᵐᵃᵗⁱᵒⁿ----------------------\n");
    printf("Basic Salary: Ksh. %d \n", b_salary);
    printf("Active Loans: Ksh. %d \n\n", active_loan);
    printf("##############################################################\n\n");
    printf("\033[0;31m");
    printf("Deductions; \n");
    printf("\t 1. PAYE ==> Ksh. %d \n", paye);
    printf("\t 2. NHIF ==> Ksh. %d \n", nhif);
    printf("\t 3. NSSF ==> Ksh. %d \n", nssf);
    printf("\t 4. Loan Deducted ==> Ksh. %d \n", loan);
    printf("Total Deductions: Ksh. %d \n\n", t_deduction);
    printf("\033[0;32m");
    printf("Other Additional Income; \n");
    printf("\t 1. House Allowance ==> Ksh. %d\n", house_allow);
    printf("\t 2. Transport Allowance ==> Ksh. %d\n", transport_allow);
    printf("\t 3. Overtime ==> Ksh. %d\n", overtime_allow);
    printf("Total Additional Income: Ksh. %d\n\n", t_add_income);
    printf("\033[0;34m");
    printf("##############################################################\n\n");
    printf("\t Net Salary ==> Ksh. %d\n\n", net_salary);
    printf("##############################################################\n\n\n");

    return 0;
};
