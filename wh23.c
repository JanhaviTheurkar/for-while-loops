// 23. Print factorials of 1 to 5

#include <stdio.h>
int main() {
    int n=1;
    while(n<=5) {
        int fact=1,i=1;
        while(i<=n) { fact*=i; i++; }
        printf("%d! = %d\n", n, fact);
        n++;
    }
    return 0;
}
