/*
 * 
 * Assignment 2:                Given: 01/13/14     Due: 01/16/14              csci_1111
 *                                                 Points: 10
 * Purpose: - Write a C program
 *         - Generate some output with printf
 *         - Use a variable
 *
 * Description:
 *
 * Write a C program that prints:
 *
 *  - Your name
 *  - Your e-mail address
 *  - Your High School
 *  - Home town
 *  - Current college
 *  - Current year in school
 *  - Your age in decimal
 * - Your age in octal
 * - Your age in hexadecimal
 *
 *on nine separate lines. Include a label before each piece of
 *information you print. Treat your age as a stored numeric 
 *piece of data by placing it in a variable. Use conversion 
 *specifiers to produce the various bases for the one value 
 * in that variable.
 *
 * Do not read any inputs, just produce the output. 
 *
 * Ex:
 *                  Name: John Doe
 *                E-mail: jdoe@mymail.com
 *           High School: Central Minnesota High
 *             Home town: Lake Wobegon, MN
 *       Current College: Normandale Community College
 * Current year in school: High school senior
 *                   Age: 17
 *          Age in octal: 21
 *    Age in hexadecimal: 11
 *
 *  
 */


#include <stdio.h>

int main()
{
    printf("Name:                   Avery Amadeus (4mad3u5) Jacobson\n");
    
    printf("E-mail:                 jacobsona1@my.normandale.edu\n");
    
    printf("High School:            Edina High School\n");
    
    printf("Home town:              Edina, MN\n\n");
    
    printf("Current College:        Normandale Comunity College,\n                        Mankato State,\n                        University of Minnesota,\n                        St. Cloud State\n");

    printf("\nCurrent year in school: Junior\n");
    
    printf("Age:                    30\n");
    
    printf("Age in octal:           36\n");
    
    printf("Age in hexadecimal:     1E\n");
    
    
    getchar();
    
    return 0;
}


