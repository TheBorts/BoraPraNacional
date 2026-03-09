#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main(){

    long long n = 0;

    scanf("%lld ", &n);
    printf("%lld ", n);

    while(n != 1){
        if (n % 2 == 0){
            n /= 2;
            printf("%lld ", n);
            continue;
        }

        n = 3*n + 1;

        printf("%lld ", n);
        

    }

    return 0;
}

