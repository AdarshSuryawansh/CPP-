

//Compiler version g++ 6.3.0
#include<stdio.h>
#include<conio.h>
int Add();                   //Function Deceleration

int main()
{
      int Sum = 0;
      
      Sum = Add();         //Function Call
      
      printf("\n Addition is = %d",Sum);
      
      getch();
      return 0;
}

int Add()                  //Function Definition
{
      int No1 = 0, No2 = 0, Sum = 0;
      
      printf("\n Enter 2 Numbers For Addition => ");
      scanf("%d%d",&No1,&No2);
      
      Sum = No1 + No2;
      
      return Sum;
}