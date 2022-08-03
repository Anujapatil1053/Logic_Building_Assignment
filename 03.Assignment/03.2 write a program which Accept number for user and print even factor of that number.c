#include <stdio.h>
#include <conio.h>

void displayFactor(int iNo)
{
  int i = 0;
  
  if( iNo <= 0)
  {
    iNo = -iNo;
  }
  for( i = 1; i <= iNo; i++)
  {
    if( iNo % i == 0 && i % 2 == 0)
    {
      printf(" \n %d \n",i);
    }
  }
}

int main()
{
  int iValue = 0;
  
  printf("\n Enter A Number =");
  scanf("%d",&iValue);
  
  displayFactor(iValue);
  
  return 0;
}