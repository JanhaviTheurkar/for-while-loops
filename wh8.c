// 8. Count digits of a number

#include <stdio.h>
int main() {
    int n=12345, count=0;
    while(n!=0) {
        n/=10;
        count++;
    }
    printf("Digits = %d", count);
    return 0;
}
