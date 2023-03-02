#include<stdio.h>
int main()
{
    int prod=1,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Factorial of negative number is not possible");
    }
    else if (n==0)
    {
        printf("The factorial is of %d is 0",n);
    }
    else
    {
       while(n>=1)
        {
            prod=prod*n;
            n=n-1;
        }
    printf("%d",prod);
    }

    return 0;


}
