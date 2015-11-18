#include <stdio.h>
#include <stdlib.h>

int F(int n)
{
if (n < 0)
{

printf("impossible n doit étre positif\n");
}
else if (n==0 || n==1)
return 1;
else return F(n-1) + F(n-2);
}
int main ()
{
    int n,i ;
    printf("donnner une valeur a n:");
    scanf("%d",&n);
    for (i=0; i<=n; i++)
    {
        if(i==0 || i==1)
            printf("F(%d)=%d\n",i,1);
        else printf("F(%d) = F(%d) + F(%d) = %d+%d= %d\n",i,i-1,i-2,F(i-1),
            F(i-2), F(i));
    }
    return 0;

}

