/*
Project: Library Management System
Author: Limo Antony
Date: July 2021
License: MIT
Compiler: C99
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char username[20][20];
    char password[20];

    printf("________________________________________________________________________________________________________________\n");
    printf("\t\t\t\t\tWELCOME TO OUR COUNTY LIBRARY!!!\n");
    printf("________________________________________________________________________________________________________________\n");


    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,"Limo")==0){
        if(strcmp(password,"1213")==0){

        printf("\nWelcome.Login Success!");


        }else{
    printf("wrong password\n");
}
    }else{
    printf("User doesn't exist\n");
}
    system("cls");




    return 0;

}
