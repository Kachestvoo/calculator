#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i = 0, k = 0;
    float a = 0, b = 0;
    while (i>=0){
        if (i == 0){
            printf ("example \n"); // main interface
            scanf ("%d", &i);
            if (i == 0)
                exit (0);
            if (i == 1){ // math
                printf ("example math \n");
                scanf ("%d", &k);
                if (k == 0)
                    i = 0;
                if (k == 1){
                    printf("Input a: ");
                    scanf ("%f", &a);
                    printf("Input b: ");
                    scanf ("%f", &b);
                    printf ("result %.2f \n", a+b);
                }
            }
        }
    }

}
