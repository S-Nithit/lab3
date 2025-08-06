#include <stdio.h>

int main(){
    float a = 0;
    float b = 0;
    float c = 0;

    printf("Enter cone height: ");
    scanf("%f",&a);
    printf("Enter cone base radius: ");
    scanf("%f",&b);
    
    c = (3.14159265359*(b*b)*a)/3;

    printf("Cone volume = %.1f\n",c);

    if(c>260){
        printf("\nthis cone is perfect for Supun project\n");
    }
    else {
        printf("\nthis cone is not fit for this project\n");
    }

    return 0;
}