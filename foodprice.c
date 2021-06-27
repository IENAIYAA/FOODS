#include<stdio.h>
void main()
{
    int choice;
    printf("Enter your food items choice ");
    scanf("%d",&choice);
    if(choice<1 || choice>5)
    {
        printf(" No food items is available for this choice  ");
    }
    else if(choice=1)
    {
        printf("Food Item - 1.Pizza\n");
        printf("Price - Rs.239\n");
    }
    else if(choice=2)
    {
        printf("Food Item - Burger\n");
        printf("Price - Rs.129\n");
    }
    else if(choice=3)
    {
        printf("Food Item - Pasta\n");
        printf("Price - Rs.179\n");
    }
    else if(choice=4)
    {
        printf("Food Item - French fries\n");
        printf("Price - Rs.99\n");
    }
    else if(choice=5)
    {
        printf("Food Item - sandwich\n");
        printf("Price - Rs.149\n");
    }
    
}
