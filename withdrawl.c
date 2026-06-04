#include <stdio.h>

int main() {
    float balance = 1000.0, amount;
    int choice;

    printf("=== Simple Bank System ===\n");
    printf("Current Balance: %.2f\n", balance);

    printf("\n1. Deposit\n");
    printf("2. Withdraw\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            balance += amount;
            printf("Deposit Successful!\n");
            printf("Updated Balance: %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if(amount <= balance) {
                balance -= amount;
                printf("Withdrawal Successful!\n");
                printf("Remaining Balance: %.2f\n", balance);
            } else {
                printf("Insufficient Balance!\n");
            }
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}