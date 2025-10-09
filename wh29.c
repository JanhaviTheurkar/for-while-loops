// 29. Print sum of odd numbers up to 50

#include <stdio.h>
int main() {
    int i=1, sum=0;
    while(i<=50) {
        sum+=i;
        i+=2;
    }
    printf("Sum = %d", sum);
    return 0;
}
