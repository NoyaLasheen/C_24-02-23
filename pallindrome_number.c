#include<stdio.h>
int main()
{
    int n,m,rev=0,digit;
    printf("Enter the number: ");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        digit=n%10;
        rev=10*rev+digit;
        n=n/10;
    }

    if (m==rev)
    {
        printf("\nPalindrome number\n");
    }
    else
        printf("\nNot palindrome\n");

    return 0;
}
