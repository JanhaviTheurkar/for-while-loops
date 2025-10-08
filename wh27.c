// 27. Print numbers divisible by both 3 and 5 (1-100)

#include <stdio.h>
int main() {
    int i=1;
    while(i<=100) {
        if(i%3==0 && i%5==0) printf("%d ", i);
        i++;
    }
    return 0;
}
