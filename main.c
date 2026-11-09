#include<stdio.h>
int main()
{
    int n, amt_paid;
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

    }
}