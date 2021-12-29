#include <stdio.h>
#include <math.h>

int main(){
    float a;
    float b;
    printf("Enter two numbers: ");
    scanf("%f", &a); //Do not forget the & here!!
    scanf("%f", &b);

    //Arithmetic Below
    printf("%f + %f is %f\n", a, b, a+b);
    printf("%f - %f is %f\n", a, b, a-b);
    printf("%f times %f is %f\n", a, b, a*b);
    printf("%f / %f is %f\n", a, b, a/b);
    printf("%f to the power of %f is %f\n", a, b, pow(a, b));
    printf("The square root of %f is %f\n", a, sqrt(a));
    printf("The square root of %f is %f\n", b, sqrt(b));
    return(0);
}
