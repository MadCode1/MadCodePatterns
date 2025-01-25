// # This is simple diamond pattern c-program
#include <stdio.h>
int main(){
    
    for(int i = 1;i<=5;i++){

        for(int j = 5;j>=i;j--){
            printf(" ");
        }

        for(int k = 1;k<=i;k++){
                printf("x ");
            }

        printf("\n");
        }

    
	for (int t = 0;t<=5;t++){
		
        for(int l = 1;l<=t;l++){
            printf(" ");
        }

        for(int u = 5;u>=t;u--){
           
            printf("x ");
            
        }

		printf("\n");
	}
    return 0;
}