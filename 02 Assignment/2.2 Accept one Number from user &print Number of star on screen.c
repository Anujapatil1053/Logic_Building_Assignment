#include <stdio.h>
#include <conio.h>

void Display( int iNo)
{
  
  int i = 0;
  
  while( iNo > i)
  {
    printf("\t * \n");
    iNo--;
  }
}

int main()
{
  int iValue = 0;
  
  printf("\n Enter Number = ");
  scanf("%d",&iValue);
  
  Display(iValue);
  
  return 0;
}