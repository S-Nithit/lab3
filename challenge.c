#include <stdio.h>

int main(){
    float a = 0;
    float b = 0;
    float c = 0;

    float d = 0;
    float e = 0;
    float f = 0;
    
    printf("Calculus score: ");
    scanf("%f",&a);
    printf("Physic score: ");
    scanf("%f",&b);
    printf("Science score: ");
    scanf("%f",&c);

    printf("Subject     Score     Grade     Grade\n");
    printf("--------------------------------------\n");

    if(a >= 80){
        printf("Cal         %.1f        A         4.0\n",a);
        d = 4.0;
    }
    else if(a <= 80 && a>= 70){
        printf("Cal         %.1f        B         3.0\n",a);
        d = 3.0;
    }
    else if(a <= 70 && a>= 60){
        printf("Cal         %.1f        C         2.0\n",a);
        d = 2.0;
    }
    else if(a <= 60 && a>= 50){
        printf("Cal         %.1f        D         1.0\n",a);
        d = 1.0;
    }
    else {
        printf("Cal         %.1f        F         0.0\n",a);
        d = 0.0;
    }


    if(b >= 80){
        printf("Physics     %.1f        A         4.0\n",b);
        e = 4.0;
    }
    else if(b <= 80 && b>= 70){
        printf("Physics     %.1f        B         3.0\n",b);
        e = 3.0;
    }
    else if(b <= 70 && b>= 60){
        printf("Physics     %.1f        C         2.0\n",b);
        e = 2.0;
    }
    else if(b <= 60 && b>= 50){
        printf("Physics     %.1f        D         1.0\n",b);
        e = 1.0;
    }
    else {
        printf("Physics     %.1f        F         0.0\n",b);
        e = 0.0;
    }

    if(c >= 80){
        printf("compro      %.1f        A         4.0\n",c);
        f = 4.0;
    }
    else if(c <= 80 && c>= 70){
        printf("compro      %.1f        B         3.0\n",c);
        f = 3.0;
    }
    else if(c <= 70 && c>= 60){
        printf("compro      %.1f        C         2.0\n",c);
        f = 2.0;
    }
    else if(c <= 60 && c>= 50){
        printf("compro      %.1f        D         1.0\n",c);
        f = 1.0;
    }
    else {
        printf("compro      %.1f        F         0.0\n",c);
        f = 0.0;
    }

    printf("\nGPA : %.1f\n",(d+e+f)/3);


     
    return 0;
}