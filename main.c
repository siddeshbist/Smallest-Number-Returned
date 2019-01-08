//Siddesh Bist
//LO5
//400072076
//Lab 1
//Q2

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,i,min;
    printf("Enter the number of integers you wish: ");
    scanf("%d",&n);

    while(n<=1) //while loop will stop running when the user enters a positive number greater than 1
    {
        printf("Please enter a positive integer: ");
        scanf("%d", &n);
    }
    printf("Enter first number: ");
    scanf("%d",&x);
    min = x; //the first number the user enters is set as min
    for(i=1; i<=n-1;i++) //stopping condition set to n-1 because user will only be asked to enter the next numbers n-1 times as they have already been asked once before the for loop
    {
        printf("Enter another number: ");
        scanf("%d",&x);
        if(x<min) //the consecutive number entered is compared to the previous number, which is set as min
        {
            min=x;// if the new integer is less then the value of min, then min is updated with the smaller integer
        }

    }

    printf("The smallest number out of the set of inputs is %d",min);
    return 0;
}