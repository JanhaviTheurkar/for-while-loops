// 28. Print sum of even numbers up to 50

#include <stdio.h>
int main() {
    int i=2, sum=0;
    while(i<=50) {
        sum+=i;
        i+=2;
    }
    printf("Sum = %d", sum);
    return 0;
}
