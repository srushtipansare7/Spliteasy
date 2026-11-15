#include<stdio.h>
int main()
{
    int n, amt_paid[100], total = 0;
    char name[100][50];
    float equal_share, balance;
    printf("========SPLITEASY========\n");
    printf("Enter number of people splitting: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        printf("Enter name of person: ");
        scanf(" %[^\n]%*c", name[i]);
        printf("Enter the amount paid by them: ");
        scanf("%d", &amt_paid[i]);

        total += amt_paid[i];
    }

    printf("----------Summary----------\n");
    printf("Total amount spent: %d\n", total);
    equal_share = (float)total / n;
    printf("Each person should pay: %.2f\n", equal_share);
    for (int i=0;i<n;i++)
    {
        printf("Name: %s\n", name[i]);
        balance = amt_paid[i] - equal_share;
        printf("Balance amount: %.2f\n", balance);
    }

}