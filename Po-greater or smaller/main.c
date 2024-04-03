#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i,k;
    float x1 , x2;
    printf("Hello Mate , how are you there?:3 \n");
    printf("\n");

    printf("i hope you are totally fine, I'm Po , your tool that will help you \n" );
    printf("to know which number is greater or smaller \n");
    printf("\n");

    printf("\n");



    printf("I will be glad to help you anytime\n");
    printf("\n");
    printf("\n");

    for(i=0;i<1000;i++){
        do{
            printf("give me the first number x1 \n");
            scanf("%f",&x1);
            printf("Thank You , now i need the second  number x2 \n");
            scanf("%f",&x2);
            if( x1 == x2){
                printf("%f and %f are the same number \n", x1,x2);
            }else if (x1 < x2){
                printf("%f is < %f \n", x1,x2);
            }else
                printf("%f is > %f \n", x1,x2);

        }while(i==4*k);
         printf(" Po is happy to spend time with you :3 \n");
    }
    return 0;
}
