#include<stdio.h>
int main()
{

    int  n , j, i, s ;

    printf("entrer le nombre de line ");
    scanf("%d",&n);

    for (i=1; i<=n ;++i) {

       for(s=1;s<=n-i ;++s)
           {
      ++9         printf(" ");

           }
        for(j=i ; j<=i*2-1 ; ++j )
           {
                printf("*");
           }
       for(j=0 ; j<i-1 ; ++j )
           {
                printf("*");
           }


            printf("\n");

        }










}
