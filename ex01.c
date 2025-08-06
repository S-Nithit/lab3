#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;

    printf("Enter a number 1 : ");
    scanf("%d",&a);
    printf("Enter a number 2 : ");
    scanf("%d",&b);

    if(a==b){
        printf("Match\n");
    }
    else{
         printf("Does not match. Try again\n");
     }
     
    return 0;
}