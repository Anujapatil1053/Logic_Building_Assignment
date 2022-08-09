#include <stdio.h>
#include <conio.h>

#define  TRUE 1
#define  FALSE 0

int ChkGreter ( int iNo )
{
    if( iNo > 100 )
    {
        return 1;
    }
    else
    {
      return 0;
    }
}

int main()
{
    int iValue = 0;
    
    int bRet = FALSE;
    
    
    printf(" \n Enter A Number = " );
    scanf( " %d ",&iValue );
    
    bRet = ChkGreter ( iValue );
    
    if ( bRet == 0)
    {
        printf( " \n Greter \n " );
    }
    else
    {
        printf( " \n Smaller \n " );
    }
    
    return 0;
   
}