#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }
    if(n <= 1)
        printf("Not prime\n");
    else if(flag == 0)
        printf("'Yes'This is a Prime Number\n");
    else
        printf("'NO'This is not a prime Number\n");
    return 0;
}
