// 26. Find LCM of two numbers

#include <stdio.h>
int main() {
    int a=12, b=15, lcm;
    lcm = (a>b)?a:b;
    while(1) {
        if(lcm%a==0 && lcm%b==0) {
            printf("LCM = %d", lcm);
            break;
        }
        lcm++;
    }
    return 0;
}
