#include <stdio.h>

int main() {
    int choice, quantity;
    float price, total_cost=0, amount_paid, balance;
    char item[30];

    printf("\t\tWelcome to the Restaurant Billing System\n");
    printf("\t\t----------------------------------------\n\n");

    while(1) {
        printf("Choose from the menu: \n");
        printf("1. Sandwich - $5\n");
        printf("2. Pizza - $10\n");
        printf("3. Burger - $8\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice==4)
            break;

        switch(choice) {
            case 1:
                strcpy(item, "Sandwich");
                price=5;
                break;

            case 2:
                strcpy(item, "Pizza");
                price=10;
                break;

            case 3:
                strcpy(item, "Burger");
                price=8;
                break;

            default:
                printf("Invalid choice!\n");
                continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        total_cost += price * quantity;

        printf("\nItem: %s\n", item);
        printf("Price: $%.2f\n", price);
        printf("Quantity: %d\n", quantity);
        printf("Total cost: $%.2f\n\n", total_cost);
    }

    printf("Total bill: $%.2f\n", total_cost);
    printf("Enter amount paid: ");
    scanf("%f", &amount_paid);

    balance = amount_paid - total_cost;

    printf("\nBalance: $%.2f\n", balance);

    printf("\nThank you for using the Restaurant Billing System\n");

    return 0;
}
