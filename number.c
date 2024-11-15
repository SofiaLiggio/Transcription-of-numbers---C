#include <stdio.h>

int main() {

    int choice, number, result;

do
{   
    printf("***MENU***\n\n");
    printf("1) Write a number and read the equivalent\n");
    printf("2) Write a number to find out if it is even or odd\n");
    printf("Your choice: ");
    scanf(" %d",&choice);


    if(choice==1) {
    
        printf("Write a number between 1 and 10: ");
        scanf("%d", &number);

            switch (number) {
                case 1:
            printf("\nONE\n");
            break;
            case 2:
                printf("\nTWO\n");
                break;
            case 3:
                printf("\nTHREE\n");
                break;
            case 4:
                printf("\nFOUR\n");
                break;
            case 5:
                printf("\nFIVE\n");
                break;
            case 6:
                printf("\nSIX\n");
                break;
            case 7:
                printf("\nSEVEN\n");
                break;
            case 8:
                printf("\nEIGHT\n");
                break;
            case 9:
                printf("\nNINE\n");
                break;
            case 10:
                printf("\nTEN\n");
                break;
            
            default:
                printf("\n***Number not included***\n\n");
                break;
            }
    } else {
        printf("Write a number: ");
        scanf(" %d", &result);
        switch (result%2)
                {
                case 0: 
                    printf("\nEVEN NUMBER\n");
                    break;
                
                default:
                    printf("\nODD NUMBER\n");
                    break;
                }
    }
                
    }
        
 while (choice <1 || choice>2);
    return 0;
}