#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i+=1;
    }
    printf("%d",sum);
    return 0;
}
