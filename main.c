#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b,c, delta, x1,x2,x0;

int main()
{
    printf("Hello , ich kann Ihre Gleichung loesen, Koennen Sie bitte mir die Coefficienten a b c  geben:\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("Ihre Gleichung ist %fx^2 + %fx + %f \n", a, b,c);
    delta= b*b - 4*a*c;
    printf("Delta :%f\n",delta);

    if (delta == 0){
            x0= -b /2*a;
        printf("Diese Gleichung hat nur eine Wurzel x0= %f \n", x0);
    }else if (delta > 0) {
            x1 = (-b + sqrt(delta))/ (2*a);
            x2 = (-b - sqrt(delta))/ (2*a);
        printf("Diese Gleichung hat zwei Wurzel in R x1= %f and x2 =%f \n",x1,x2);
        } else{
        printf("Diese Gleichung hat keine Wurzel in R");
        }





    return 0;
}
