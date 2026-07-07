#include <stdio.h>
#include "physics.h"

int main()
{
    int option = -1;
    // main menu
    do
    {
        printf("===============================\n");
        printf("Engineering toolkit\n");
        printf("===============================\n\n");
        printf("Select the type of calculation you want to perform: \n");
        printf("1 - Physics\n");
        printf("0 - exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);
    } while (option < 0 || option > 1);

    switch (option)
    {
    case 1:
        physicsMenu();
        break;
    case 0:
        printf("Exiting the program...\n");
        break;
    default:
        printf("Invalid option\n");
        break;
    }

    return 0;
}