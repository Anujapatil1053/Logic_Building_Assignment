#include <stdio.h>
#include <conio.h>

#define TRUE 1
#define FALSE 0

ChkEven ( int iNo )
{
                                            if ( iNo % 2 == 0 )
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
                                            int iValue = 0 , bRet = 0;


                                           Printf("\n Enter A Number = ");
                                           scanf("%d",&iValue);

                                           bRet = ChkEven(iValue);

                                           if(bRet == 1)
                                           {
                                                     printf("\n Given Number %d Is Even \n ",iValue );
                                           }

                                           else
                                           {
                                                     printf("\n Given Number %d Is Odd \n ",iValue);
                                           }
}
