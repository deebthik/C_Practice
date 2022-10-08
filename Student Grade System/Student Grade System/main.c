//
//  main.c
//  Student Grade System
//
//  Created by Deebthik on 10/4/16.
//  Copyright © 2016 Deebthik. All rights reserved.
//

//Program to create a student grade system using switch-case

#include <stdio.h>
#include <string.h>

int english, math, physics, chem, cs, total, avg, rounded_avg;
char final_grade[10];

int main() {
    
    printf("Enter marks obtained in English, Math, Physics, Chemistry and CS (m1, m2, m3, m4, m5): ");
    scanf("%d, %d, %d, %d, %d", &english, &math, &physics, &chem, &cs);
    
    total = english + math + physics + chem + cs;
    avg = total/5;
    if(avg%10 != 0)
        rounded_avg = avg+(10-(avg%10));
    else
        rounded_avg = avg;
    
    switch (rounded_avg){
            
        case (100):
            strcpy(final_grade, "A1");
            break;
            
        case (90):
            strcpy(final_grade, "A2");
            break;
            
        case (80):
            strcpy(final_grade, "B1");
            break;
            
        case (70):
            strcpy(final_grade, "B2");
            break;
            
        case (60):
            strcpy(final_grade, "C1");
            break;
            
        case (50):
            strcpy(final_grade, "C2");
            break;
            
        case (40):
            strcpy(final_grade, "D1");
            break;
            
        case (30):
            strcpy(final_grade, "D2");
            break;
            
        default:
            strcpy(final_grade, "F");
            
    }
    
    printf("Your total marks is %d.\nYour final grade is %s.\n", total, final_grade);
    
    return 0;
    
}
