// 24. Print ASCII values of A-Z

#include <stdio.h>
int main() {
    char c='A';
    while(c<='Z') {
        printf("%c = %d\n", c, c);
        c++;
    }
    return 0;
}
