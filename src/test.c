#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int reversedSum(int,int);

int main(void) {
    int a=123,b=45,result;

    result = reversedSum(a,b);
    printf("Result: %d\n",result);

    return 0;
}

int reversedSum(int a,int b) {
    int rev_a=0,rev_b=0;
    while (a>0) {
        rev_a = rev_a*10 + a%10;
        a/=10;
    }
    while (b>0) {
        rev_b = rev_b*10 + b%10;
        b/=10;
    }
    return rev_a + rev_b;
}