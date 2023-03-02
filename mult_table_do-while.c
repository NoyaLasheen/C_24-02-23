#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    do
    {
        printf("%d x %d = %d\n",i,n,i*n);
        i+=1;
    } while(i<=10);

    return 0;
}
