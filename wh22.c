// 22. Check prime number

#include <stdio.h>
int main() {
    int n=17, i=2, flag=1;
    while(i<=n/2) {
        if(n%i==0) { flag=0; break; }
        i++;
    }
    if(flag) printf("Prime");
    else printf("Not Prime");
    return 0;
}
