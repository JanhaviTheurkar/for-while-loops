// Print first 10 even squares

#include <stdio.h>
int main() {
    for(int i=2; i<=20; i+=2) {
        printf("%d^2 = %d\n", i, i*i);
    }
    return 0;
}
