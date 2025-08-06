#include <stdio.h>

int main(){
    int a = 0;

    printf("Enter a number : ");
    scanf("%d",&a);

    if(a<=100 && a>=1){
        if(a%2 == 0){
            printf("%d is even\n",a);
        }
        else{
            printf("%d is odd\n",a);
        }
    }
    else{
         printf("%d is out of range\n",a);
     }
     
    return 0;
}