// 19. Print cube of numbers 1 to 10

#include <stdio.h>
int main() {
    int i=1;
    while(i<=10) {
        printf("%d^3 = %d\n", i, i*i*i);
        i++;
    }
    return 0;
}
