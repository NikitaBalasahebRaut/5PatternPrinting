/*
 Problem statement :
 Write a program which accept number from user and display below pattern:
 
 Input :    6
Output :   1    *   3   *   5   *
 
 Input :      9
 Output :   1   *   3   *   5   *   7   *   9
 
 */

/*
        iNo -> 6

_____________________________________
Loop            1   2   3    4   5   6    7   8   9
_____________________________________
Output         1   *   3    *   5   *    7   *   9
_____________________________________
  
 Concllusion
 
    Even loop counter -> #
    Odd loop conunter -> *
 
 */


#include<stdio.h>

void Pattern(int iValue)
{
  int iCnt = 0;
  
  if(iValue < 0)
  { 
    iValue = -iValue;
  }
  
  for(iCnt = 1; iCnt <= iValue; iCnt++)
  {
	  if(iCnt % 2 == 0)
	  {
        printf("* \t");
	  }
	  else
	  {
		   printf("%d\t ",iCnt);
	  }
   }
}

#include<stdio.h>

int main()
{
 int no = 0;
 
 printf("Enter The Number\n");
 scanf("%d",&no);
 
 Pattern(no);


return 0;
}

/*
output

Enter The Number
9
1        *      3        *      5        *      7        *      9
D:\ProgramTopicWise\LB\PatternPrinting\Pattern5>myexe
Enter The Number
6
1        *      3        *      5        *
D:\ProgramTopicWise\LB\PatternPrinting\Pattern5>myexe
Enter The Number
2
1        *

*/