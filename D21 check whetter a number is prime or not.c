#include <stdio.h>

int main() {
    int num=29, flag=1;

    for(int i=2; i<=num/2; i++) {
        if(num % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag==1)
        printf("%d is Prime", num);
    else
        printf("%d is Not Prime", num);

    return 0;
}
