#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;


int main(){

    int n = 0;

    cin >> n;

    string bag;
    int foi = 0;

    for (int i = 0; i < n; i++){
        cin >> bag;
        foi = 0;
        for (int j = 0; j+1 < bag.size(); j++){
            if (bag[j] == 'i' && bag[j+1] == 't'){
                printf("YES\n");
                foi = 1;
                break;
            }
        }
        if (foi == 0) printf("NO\n");
    }

    return 0;
}