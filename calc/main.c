#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i = 0;
    float a = 0, b = 0;
    char op;
    printf ("example \n"); // ������� ��������� ����� ������������

    while (i>=0){ //���� i<0 ��������� ���������� ������
        printf("Input i ");
        scanf ("%d", &i);
        if (i == 0) // ���� i = 0, ������� ��������� ����� ������������
            printf ("example \n");

        if (i == 1){ // Arithmetic
            printf ("+ - / * %");
            scanf ("%f %c %f", &a, &op, &b);
            if (op == '+')
                printf ("%.2f + %.2f = %.2f \n", a, b, a+b);
            if (op == '-')
                printf ("%.2f + %.2f = %.2f \n", a, b, a-b);
            if (op == '/')
                printf ("%.2f / %.2f = %f \n", a, b, a/b);
            if (op == '%'){
                int c = 0, d = 0;
                c = a;
                d = b;
                printf ("%f / %f = %d \n", a, b, c%d);
            }
            if (op == '^')
                printf ("%.2f ^ %.2f = %.2f \n", a, b, pow(a,b));
            if (op == 's') // ���������� �����
                printf ("(%.2f) sqrt(%.2f) = %.2f \n", b, a, pow(a,1/b));
        }

        if (i == 2){ // Trigonometry

        }
    }
}
