#include<stdio.h>
int main()
{
 int num ,result;
   printf("entre the number => \n\n");
   scanf("%d",&num);
   printf("le table de multiplication est :  \n");
   for(int i = 1; i<=10 ;i++)
   {
       result = num*i;
       printf("\t\t\t\t%d * %d = %d  \n",num,i,result);
   }
}
