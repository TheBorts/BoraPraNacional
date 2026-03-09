#include<string.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){

    char* dna = (char*) calloc(1000010, sizeof(char));
    scanf("%s ", dna);

    int i = 0;
    long int count = 0, max = 0;

    while(true){
        count++;
        
        if (dna[i] == dna[i+1]){
            i++;
            continue;
        }

        if (dna[i+1] == '\0'){
            break;
        }
        
        if (dna[i] != dna[i + 1]){
            
            
            if (count > max){
                max = count;
            }
            
            count = 0;
            i++;
            continue;
        }
        
    }
    if (count > max){max = count;}
    printf("%ld ", max);
    return 0;
}