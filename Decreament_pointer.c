#include<stdio.h>
void print(int**p,int *x)
{
   printf("\nAddrwss hold by pointer p = %d",*p);
   printf("\nData pointed by pointer p = %d",**p);
   printf("\nAddress of variable x = %d",x);
   printf("\nData contains variable x = %d\n",*x);
}

int main()
{
   int x,y;
   char *s[] = {"ptr--","--ptr","--*ptr","--(*ptr)","--*(ptr)","*ptr--","(*ptr)--","*(ptr)--","*--ptr","*(--ptr)" };
   printf("Enter any integer value ");
   scanf("%d",&x);
   int *p=&x;
   printf("\nEnter any pointer decreament operation number you want to check\n");
   for(int i=0;i<10;i++)
   {
       printf("%s = %d\n",s[i],i);
       
   }
   scanf("%d",&y);
   printf("\n**Before pointer decreament");
   print(&p,&x);
   switch(y)
   {
       case 0:
            p--;
            break;
       case 1:
            --p;
            break;
       case 2:
            --*p;
            break;
       case 3:
            --(*p);
            break;
       case 4:
            --*(p);
            break;
       case 5:
            *p--;
            break;
       case 6:
            (*p)--;
            break;
       case 7:
            *(p)--;
            break;
       case 8:
            *--p;
            break;
       case 9:
            *(--p);
            break;
       default:
            printf("input is not valid");
   }
   
   printf("\n**After pointer decreament");
   print(&p,&x);
   return 0;
}



