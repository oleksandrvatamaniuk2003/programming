#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define Len 5

int main()
{
	 double a[Len][Len], x[Len], ratio, determinant=1;
	 int col1,col2,str1,str2;
	 printf("Порядок обраної матриці: ");
	 scanf("%d", &str2);
	 printf("\nЕлементи: \str2");
	 for(col1 = 0; col1 < str2; col1++)
	 {
		  for(col2 = 0; col2 < str2; col2++)
		  {
			   printf("a[%d][%d]=",col1,col2);
			   scanf("%lf", &a[col1][col2]);
		  }
	 }
	 for(col1 = 0; col1 < str2; col1++)
	 {
		  if(a[col1][col1] == 0.0)
		  {
			   printf("Не вийшло обчислити");
			   exit(0);
		  }
		  for(col2 = col1+1; col2 < str2; col2++)
		  {
			   ratio = a[col2][col1]/a[col1][col1];

			   for(str1 = 0; str1 < str2; str1++)
			   {
			  		a[col2][str1] = a[col2][str1] - ratio*a[col1][str1];
			   }
		  }
	 }
	 for(col1 = 0; col1 < str2;col1++)
     {
         determinant = determinant * a[col1][col1];
     }
	 printf("\str2\nДетермінант обраної матриці: %0.3lf", determinant);
	 return 0;
}