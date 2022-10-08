//
//  main.c
//  Vowel or Consonant
//
//  Created by Deebthik on 10/1/16.
//  Copyright © 2016 Deebthik. All rights reserved.
//


//Program to check if a given character is a vowel or consonant

#include <stdio.h>

char c;
int isLowercasevowel, isUppercasevowel;

int main(){
    
    printf("Enter a character: ");
    scanf("%c", &c);
    
    isLowercasevowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    
    isUppercasevowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    if (isLowercasevowel || isUppercasevowel)
        printf("%c is a vowel.\n",c);
    else
        printf("%c is a consonant.\n",c);
    
    return 0;
    
}


