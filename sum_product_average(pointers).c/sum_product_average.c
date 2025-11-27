#include <stdio.h>

void do_avg(int a,int b, int *sum, int *prod, int *avg);

int main(){
    int a = 3, b = 5;
    int sum,prod,avg;
    do_avg(a, b, &sum,&prod,&avg);
    printf("sum = %d prod = %d avg = %d", sum,prod,avg);
    return 0;
}

void do_avg(int a,int b, int *sum, int *prod, int *avg){
    *sum = a + b;
    *prod = a* b;
    *avg = (a+b)/2;
}

