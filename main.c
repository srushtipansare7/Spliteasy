#include<stdio.h>
int main()
{
    int n, amt_paid, total = 0, equal_share = 0, balance = 0;
    char name[100];
    printf("========SPLITEASY========\n");
    printf("Enter number of people splitting: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        printf("Enter name of person: ");
        scanf(" %[^\n]%*c", name);
        printf("Enter the amount paid by them: ");
        scanf("%d", &amt_paid);

        total += amt_paid[i];

    
    printf("Total amount spent: %d\n", total);

    equal_share = total / n;
    printf("Each person should pay: %d\n", equal_share);

    balance = amt_paid[i] - equal_share;
    printf("Balance amount: %d\n", balance);
    }

}