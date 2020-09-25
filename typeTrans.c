#include <stdio.h>
typedef struct StructDemo
{
   char name[2];
   int num;
   double score;
}StructDemo;

int main()
{
   int sum = 17, count = 5;
   double mean;
   StructDemo std = {'a',0};
   printf("%c",std.name);
   mean =  sum / count;
   printf("Value of mean : %f\n", mean );

} 
