#include<stdio.h>
void main()
{
    int *p,i,n;
    printf("Enter the memory size=");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p== NULL)
    {
        printf("the memory is not allocated");
    }
    else
    {
    printf("enter the value=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("The values are=");
    for(i=0;i<n;i++)
    {
        printf("%d  ",p[i]);
    }
    }
}

