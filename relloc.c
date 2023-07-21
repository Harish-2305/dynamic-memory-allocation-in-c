#include<stdio.h>
void main()
{
    int *p,i,n,m;
    printf("Enter the memory size=");
    scanf("%d",&n);
    //p=(int*)malloc(n*sizeof(int));
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
    printf("\nenter the size =");
      scanf("%d",&m);
    //p=realloc(p,m*sizeof(int));
    p=realloc(p,(m,sizeof(int)));
    if(p==NULL)
    {
        printf("The memory is not allocated");
    }
else
    {
    printf("enter the value=");
    for(i=n;i<m;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("The values are=");
    for(i=0;i<m;i++)
    {
        printf("%d  ",p[i]);
    }
    }
}
