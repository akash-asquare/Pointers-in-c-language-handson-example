#include <stdio.h>

int main()
{
    int *p,**q,***r,x=20;
    p=&x;
    q=&p;
    r=&q;
    printf("\naddress of variable x= %d",&x);
    printf("\naddress of pointer p= %d",&p);
    printf("\naddress hold by pointer p= %d",p);
    printf("value hold by pointer p= %d",*p);
    printf("\naddress of pointer pointer q= %d",&q);
    printf("\naddress hold by double pointer q= %d",q);
    printf("\naddress hold by pointer p using double pointer q= %d",*q);
    printf("\nvalue hold by double pointer q= %d",**q);
    printf("\nvalue hold by ***r pointer= %d",***r);
    return 0;
}
