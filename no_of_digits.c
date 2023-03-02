#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        count=count+1;
        n=n/10;
    }
    printf("Total no of digits are %d",count);
    return 0;
}
