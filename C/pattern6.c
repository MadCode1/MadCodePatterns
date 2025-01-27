// # This is pentagon shape c-program
#include<stdio.h>
int main(){

    for (int i = 1;i<=11;i++){

    for (int j = 5;j>=i;j--){

        printf(" ");
    }

    for(int h = 1;h<=i;h++){  

        if (i<=5){
            printf("* ");
        }
        else{
            break;
        }
    }
    for (int o = 5;o>=i;o--){
        if (i>0){
            printf("* ");
        }
        else{
            break;
        }
    }
    for (int l = 6;l<=i;l++){
        printf(" ");
    }
    for (int k = 10;k>=i;k--){

        if (i>5){ 
            printf("* ");
        }
        else{   
            break;
        }

    }

    for (int s = 6;s<=i;s++){
        printf("* ");
    }

    for (int e = 1;e<=i;e++){

        if (i<=5){
            printf("* ");
        }
        else{
            break;
        }
    }
    
    for (int f = 10;f>=i;f--){ 

        if (i>5){

            printf("* ");
        }
        else{

            break;
        }

    }
    printf("\n");
    }

    return 0;
}