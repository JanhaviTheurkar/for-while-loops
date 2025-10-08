// 25. Find GCD of two numbers

#include <stdio.h>
int main() {
    int a=48, b=18;
    while(a!=b) {
        if(a>b) a=a-b;
        else b=b-a;
    }
    printf("GCD = %d", a);
    return 0;
}
