// 30. Print digits of a number one by one

#include <stdio.h>
int main() {
    int n=1234;
    while(n!=0) {
        printf("%d ", n%10);
        n/=10;
    }
    return 0;
}
