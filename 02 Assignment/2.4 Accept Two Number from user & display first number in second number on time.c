#include <stdio.h>
#include <conio.h>

void Display(int iNo, int iFrequency)
{
  int i = 0;
  
  for(i = 1; i <= iFrequency; i++)
  {
    printf("\n %d ",iNo);
  }
}

int main()
{
  int iValue = 0;
  
  int iCount = 0;
  
  printf("\n Enter A Number =");
  scanf("%d",&iValue);
  
  printf("\n Enter A Frequency =");
  scanf("%d",&iCount);
  
  Display(iValue, iCount);
  
  return 0;
}