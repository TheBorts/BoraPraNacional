#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(){

    long int n = 0;
    long int count = 0;

    scanf("%ld ", &n);

    long int *arr = (long int*) calloc(n, sizeof(long int));

    scanf("%ld ", &arr[0]);

    for (int i = 1; i < n; i++){
        scanf("%ld ", &arr[i]);
            if(arr[i] < arr[i-1]){
                count += arr[i-1] - arr[i];
                arr[i] = arr[i-1];
            }
    }
    printf("%ld ", count);
    return 0;
}