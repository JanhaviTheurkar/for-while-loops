// 12. Fibonacci series up to 10 terms

#include <stdio.h>
int main() {
    int a=0,b=1,i=1;
    while(i<=10) {
        printf("%d ", a);
        int next = a+b;
        a=b;
        b=next;
        i++;
    }
    return 0;
}
