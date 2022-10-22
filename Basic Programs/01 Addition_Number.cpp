

//Compiler version g++ 6.3.0

#include<stdio.h>
#include<conio.h>
void Add();

int main()
{
      Add();
      getch();
      return 0;
}

void Add()
{
      int NO1 = 0, NO2 = 0, Sum = 0;
      
      printf("\n Enter 2 Numbers For Addition => ");
      scanf("%d%d",&NO1,&NO2);
      
      Sum = NO1 + NO2;
      
      printf("\n Addition of %d + %d = %d",NO1,NO2,Sum);
      
      getch();
}