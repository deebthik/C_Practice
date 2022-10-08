//
//  main.c
//  Employee Details
//
//  Created by Deebthik on 9/5/16.
//  Copyright © 2016 Deebthik. All rights reserved.
//



//Program to get the details of an employee, calculate the total pay and display it

#include <stdio.h>
#include <string.h>

char name[100];
char id[10];
char position[100];
float daily_pay;
int loa;
float bonus;
char details[500];
float total_pay;

int main()
{
    printf("What is the name of the employee? : ");
    scanf("%s", &*name);
    strcat(details, "Name: ");
    strcat(details, strcat(name, "\n"));
    
    printf("What is the ID of the employee? : ");
    scanf("%s", &*id);
    strcat(details, "ID: ");
    strcat(details, strcat(id, "\n"));
    
    printf("What position does the employee hold in the company? : ");
    scanf("%s", &*position);
    strcat(details, "Position: ");
    strcat(details, strcat(position, "\n"));
    
    printf("What is the daily pay for the employee? : ");
    scanf("%f", &daily_pay);
    char daily_pay_str[50];
    sprintf(daily_pay_str, "%f", daily_pay);
    strcat(details, "Daily pay: ");
    strcat(details, strcat(daily_pay_str, "\n"));
    
    printf("How many days of leave of absence did the employee avail? : ");
    scanf("%d", &loa);
    char loa_str[50];
    sprintf(loa_str, "%d", loa);
    strcat(details, "Leave of Absence: ");
    strcat(details, strcat(loa_str, "\n"));
    
    printf("How much bonus amount did the employee earn? : ");
    scanf("%f", &bonus);
    char bonus_str[50];
    sprintf(bonus_str, "%f", bonus);
    strcat(details, "Bonus: ");
    strcat(details, strcat(bonus_str, "\n\n"));
    
    total_pay = ((30-loa)*daily_pay) + bonus;
    char total_pay_str[50];
    sprintf(total_pay_str, "%f", total_pay);
    strcat(details, "Total Pay: ");
    strcat(details, strcat(total_pay_str, "\n\n"));
    
    printf("Details of the employee:\n%s", details);
    
    return 0;
}

/*

 Algorithm
 
 1. START
 2. Declare variables for name, id, position, daily pay, leave of absence, bonus, details and total pay.
 3. Read name and add it to details.
 4. Read ID and add it to details.
 5. Read position and add it to details.
 6. Read daily pay and add it to details.
 7. Read leave of absence and add it to details.
 8. Read bonus amount and add it to details.
 9. Calculate the total pay based on the daily pay, leave of absence and bonus and add it to details.
 10. Display the details.
 11. STOP
 
*/
