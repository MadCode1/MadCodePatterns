// #This is simple reverse-pyramid pattern c-program 
#include<stdio.h>
int main(){

    for (int i =0;i<=5;i++){
         for (int j =0;j<=i;j++){
            printf(" ");
         }
         for (int h =5;h>i;h--){
             printf("* ");
         }
        printf("\n");
    }

    return 0;
}