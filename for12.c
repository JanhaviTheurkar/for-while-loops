// Check if a number is prime

#include <stdio.h>
int main() {
    int n=17, i, flag=0;
    for(i=2; i<=n/2; i++) {
        if(n % i == 0) {
            flag=1;
            break;
        }
    }
    if(flag==0) printf("%d is Prime", n);
    else printf("%d is Not Prime", n);
    return 0;
}
