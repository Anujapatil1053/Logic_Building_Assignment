#include <stdio.h>
#include <conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int check(int iNo)
{
  if( ( iNo % 5 ) == 0)
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}

int main()
{
  int iValue = 0;
  
  BOOL bRet = FALSE;
  
  printf(" \n Enter Number = ");
  scanf("%d",&iValue);
  
  bRet = check( iValue );
  
  if( bRet == TRUE )
  {
    printf(" \n  Number is Divisible by 5 ");
    
  }
  else 
  {
    printf(" \n Number is not  Divisible by 5");
  }
  
  return 0;
}