#include <stdio.h>
#include <conio.h>

void printEven(int iNo)
{
  
  
                   if ( iNo <= 0)
                   {
                           return ;
                   }

                   int i = 0;

                   for( i = 1;i <= iNo;i++ )
                   {

                   if ( i % 2 == 0 )
                   {
                            printf("\n %d \n",i);
                   }
    

                  }
  
  
}

int main()
{
                 int iValue = 0;

                 printf("\n Enter A Number =");
                 scanf("%d",&iValue);

                 printEven(iValue);

                 return 0;
}
