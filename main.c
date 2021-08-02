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
#define SIZE 4

struct employee {
    int age, id;
    double salary;
};




void login();
void mainmenu();
void staff_membres();
int main()
{
 login();
 mainmenu();
staff_membres();
return 0;

}
// login function
void login(){

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

        printf("\nWelcome.Login Success! \n");
        system("cls");


        }else{
    printf("wrong password\n");
}
    }else{
    printf("User doesn't exist\n");

    return 0;

}

}
// main menu function
void mainmenu(){
    int action;
printf("\t\t\t\tMENU \n");
printf("1  Edit Staff members \n");
printf("2  Edit books \n");
printf("3  edit Users \n");

 printf("Action(1-3):\n");
 scanf("%d",&action);

if(action < 1 || action >3){
printf("Invalid action,Try again.\n");

switch(action){
      case 1:
      staff_membres();
      break;
     /* case 2:
      ();
      break;
      case 3:
      v();
      break;*/
      default:
      printf("Wrong Entry!!");
return 0;
     }
   }
}
//staff function

void staff_membres(){

 struct employee emp[4] = { 0 };


    int option = 0;
    int true = 0;
    int i = 0;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;


    int true2 = 0;

    printf(" EMPLOYEE MENU\n");

    do {

        printf("1. Add Employee\n");
        printf("2. Remove Employee\n");
        printf("0. Exit\n");
        printf("Please select from the above options: ");
        scanf("%d", &option);
        printf("\n");
        switch (option) {




        case 1:
            printf("Adding Employee\n");

            if (n1 < 3) {
                for (i = 0; i < 3; i++)
                {
                    if (emp[i].id == 0)
                    {
                        printf("Enter Employee ID: ");
                        scanf("%d", &emp[n1].id);
                        printf("Enter Employee Age: ");
                        scanf("%d", &emp[n1].age);
                        printf("Enter Employee Salary: ");
                        scanf("%lf", &emp[n1].salary);


                        printf("%d\n", n1);
                        i += SIZE;
                    }
                }
                n1++;
            }
            else {
                printf("ERROR!!! Maximum Number of Employees Reached\n");
                printf("\n");
            }
            break;

        case 2:


            printf("Remove Employee\n");
            true2 = 0;
            do {
                printf("Enter Employee ID: ");
                scanf("%d", &n3);


                for (i = 0; i < 3; i++) {
                    if (n3 == emp[i].id)
                    {
                        true2 = 1;
                        printf("Employee %d will be removed \n", emp[i].id);
                        emp[i].id = 0;
                        n1--;
                    }
                }

                if (true2 == 0) {
                    printf("wrong number \n");
                }
            } while (true2 == 0);

            break;


             case 3:    // Exit the program


            printf("Exiting Employee Menu. Good Bye!!!");
            printf("\n");
            break;
        }

         if (option > 3)
        {
            printf("ERROR: Incorrect Option: Try Again\n");
            printf("\n");
        }


    } while (option != 0);

    return 0;

    }
    //edit books function
