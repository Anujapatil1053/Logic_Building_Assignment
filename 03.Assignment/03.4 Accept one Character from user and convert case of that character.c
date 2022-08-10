#include <stdio.h>

void DisplayConvert(char CValue)
{
  if(CValue >= 'A' && CValue <= 'Z')
  {
    printf("\n %c \n ",CValue);
  }
  
  else if(CValue >= 'a' && CValue <= 'z')
  {
    printf(" \n %c \n ",CValue);
  }
}

int main()
{
  char CValue = '\0';
  
  printf("\n Enter A Character = ");
  scanf("%c",&CValue);
  
  DisplayConvert(CValue);
  
  return 0;
}