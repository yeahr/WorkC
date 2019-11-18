#include <stdio.h>
#include <stdarg.h>

double average(int num,...){
    va_list vaList;
    double sum;
    int i=1;

    va_start(vaList,num);
    for ( i = 0; i < num; i++)
    {
        sum += va_arg(vaList,int);
    }

    return sum/num;
}

int main(){
    printf("Average of 2, 3, 4, 5 = %f\n", average(2, 2,3,4,5));
    printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));
}