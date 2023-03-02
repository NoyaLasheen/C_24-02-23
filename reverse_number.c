#include<stdio.h>
int main()
{
    int n,rev=0,digit;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        rev=10*rev+digit;
        n=n/10;
    }
    printf("Reverse of the number is %d",rev);
    return 0;
}
