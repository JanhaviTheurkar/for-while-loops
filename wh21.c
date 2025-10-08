// 21. Print 1 to 100 only multiples of 7

#include <stdio.h>
int main() {
    int i=1;
    while(i<=100) {
        if(i%7==0) printf("%d ", i);
        i++;
    }
    return 0;
}
