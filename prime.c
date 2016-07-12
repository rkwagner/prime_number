#include <stdio.h>

void main(){
    int i=2, n, prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(;i*i<n;i++){
        if(n%i==0){
            prime = 0;
            break;
        }
    }
    if(prime == 1)
        printf("%d is prime\n", n);
    else
        printf("%d is NOT prime\n", n);
}
