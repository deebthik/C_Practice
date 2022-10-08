//
//  Student Details.c
//  C1
//
//  Created by Deebthik on 9/4/16.
//  Copyright © 2016 Deebthik. All rights reserved.
//



//Program to get student details and display it

#include <stdio.h>
#include <string.h>

char name[50];
char roll_no[20];
char age[5];
char branch[100];
char batch[10];
char details[500];

int main()
{
    printf("What is the name of the student? : ");
    scanf("%s", &*name);
    strcat(details, "Name: ");
    strcat(details, strcat(name, "\n"));
    
    printf("What is the roll number of the student? : ");
    scanf("%s", &*roll_no);
    strcat(details, "Roll Number: ");
    strcat(details, strcat(roll_no, "\n"));
    
    printf("How old is the student? : ");
    /*scanf("%d", &age);
     char age_str[5];
     sprintf(age_str, "%d", age);*/
    scanf("%s", &*age);
    strcat(details, "Age: ");
    strcat(details, strcat(age, "\n"));
    
    printf("Which branch does the student belong to? : ");
    scanf("%s", &*branch);
    strcat(details, "Branch: ");
    strcat(details, strcat(branch, "\n"));
    
    printf("Which batch does the student belong to? : ");
    scanf("%s", &*batch);
    strcat(details, "Batch: ");
    strcat(details, strcat(batch, "\n\n"));
    
    printf("Details of the student:\n%s", details);
    
    return 0;
}

/*

 Algorithm
 
 1. START
 2. Declare variables for name, roll number, age, branch, batch and details.
 3. Read name and add it to details.
 4. Read roll number and add it to details.
 5. Read age and add it to details.
 6. Read branch and add it to details.
 7. Read batch and add it to details.
 8. Display the details.
 9. STOP
 
*/