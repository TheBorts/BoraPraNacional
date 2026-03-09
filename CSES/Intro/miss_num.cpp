#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(){

    long int n = 0, k = 0;
    scanf("%ld ", &n);

    int *arr = (int*) calloc(n, sizeof(int));
    for (long int i = 0; i < n; i++){
        scanf("%ld ", &k);
        arr[k-1] = 1;
    }

    for (long int j = 0; j < n; j++){
        if (arr[j] == 0){
            printf("%ld ", j+1);
            break;
        }
    }

    return 0;
}