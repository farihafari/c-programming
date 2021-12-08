
#include <stdio.h>

void main()
{
    int a=24,b=46,c=75;
    int *t=&a;
    int *u=NULL;
    printf("%d %d\n",a,*t);
    c=b;
    u=t;
    printf("%d %d\n",c,*u);
    a=8;
    b=9;
    printf("%d %d %d %d\n",c,b,*u,*t);
    *t=123;
    
    printf("%d %d %d %d %d\n",a,c,b,*u,*t);
    *t=&c;
    *t=555;
    printf("%d %d %d %d %d\n",a,b,c,*u,*t);
    c=100;
    printf("%d %d %d %d %d\n",a,b,c,*u,*t);
}
