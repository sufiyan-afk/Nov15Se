#include <stdio.h>

int main()
{
    int choice, qty;
    int total = 0;
    char more;

    // Loop will run until user chooses 'n'
    do
    {
        // Display Menu
        printf("\n--------- MENU ---------\n");
        printf("1. Pizza   price = 180 rs/pcs\n");
        printf("2. Burger  price = 100 rs/pcs\n");
        printf("3. Dosa    price = 120 rs/pcs\n");
        printf("4. Idli    price = 50 rs/pcs\n");
        printf("------------------------\n");

        // Taking user choice
        printf("Please Enter your choice: ");
        scanf("%d", &choice);

        // Using switch case for menu selection
        switch(choice)
        {
            case 1:
                printf("You have selected Pizza.\n");
                printf("Enter the quantity: ");
                scanf("%d", &qty);
                total = total + (180 * qty);
                printf("Amount: %d\n", 180 * qty);
                break;

            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity: ");
                scanf("%d", &qty);
                total = total + (100 * qty);
                printf("Amount: %d\n", 100 * qty);
                break;

            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity: ");
                scanf("%d", &qty);
                total = total + (120 * qty);
                printf("Amount: %d\n", 120 * qty);
                break;

            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity: ");
                scanf("%d", &qty);
                total = total + (50 * qty);
                printf("Amount: %d\n", 50 * qty);
                break;

            default:
                printf("Invalid choice! Please select correct item.\n");
        }

        // Display total amount till now
        printf("Total Amount is = %d\n", total);

        // Asking user for more orders
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &more);   // space before %c is important

    } while(more == 'y' || more == 'Y');

    // Final bill
    printf("\nFinal Bill Amount = %d rs\n", total);
    printf("Thank you for ordering!\n");

    return 0;
}

