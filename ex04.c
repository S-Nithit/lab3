#include <stdio.h>

int main(){
    char a[20];
    float b = 0;
    float c = 0;
    float d = 0;
    float e = 0;

    printf("Enter your name: ");
    scanf("%s",a);
    printf("Enter your Calculus score: ");
    scanf("%f",&b);
    printf("Enter your Physic score: ");
    scanf("%f",&c);
    printf("Enter your Science score: ");
    scanf("%f",&d);

    e = (b + c + d)/3;

    if(e >= 80){
        printf("%s, your average is %.2f.You got grade A.\n",a,e);
    }
    else if(e < 80 && e>= 70){
        printf("%s, your average is %.2f.You got grade B.\n",a,e);
    }
    else if(e < 70 && e>= 60){
        printf("%s, your average is %.2f.You got grade C.\n",a,e);
    }
    else if(e < 60 && e>= 50){
        printf("%s, your average is %.2f.You got grade D.\n",a,e);
    }
    else {
        printf("%s, your average is %.2f.You got grade F.\n",a,e);
    }

     
    return 0;
}