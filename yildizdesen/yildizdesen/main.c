//
//  main.c
//  yildizdesen
//
//  Created by Can Tasar on 08/02/2023.
//
/*
* * * * *
 * * * * *
* * * * *
 * * * * *
* * * * *
 * * * * *
* * * * *
 * * * * *
* * * * *
 * * * * *
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    for (int i = 1; i<=10; i++) {
        for (int j = 1; j<=10; j++) {
            if((i+j)%2==0){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
