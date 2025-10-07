// 16. Print numbers until user enters 0 (do-while)

#include <stdio.h>
int main() {
    int n;
    do {
        printf("Enter number: ");
        scanf("%d", &n);
    } while(n!=0);
    return 0;
}

