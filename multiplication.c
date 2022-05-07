//İki sayıyı çarpma oparetörü kullanmadan çarpma işlemi

#include <stdio.h>

int main()
{
   int x, y; 
   int carpim = 0; 

   printf("İki tane sayı girinz:\n");
   scanf("%d%d", &x, &y);


   while(y != 0)
   {
      carpim += x;
      y--;
   }

   printf("\nSayılarin Carpimi = %d\n", carpim);
   return 0;
}