#include <stdio.h>
int main()
{
    int numberint1, numberint2, resultint;
    
    float numberfloat1, numberfloat2, resultfloat;
    double numberdouble1, numberdouble2, resultdouble;
    printf("Enter INTEGER number\n");
    scanf("%d %d", &numberint1, &numberint2);
    printf("\nEnter FLOAT number\n");
    scanf("%f %f", &numberfloat1, &numberfloat2);
    printf("\nEnter DOUBLE number\n");
    scanf("%lf %lf", &numberdouble1, &numberdouble2);

    int val;
        printf("Enter:\n 1-addition \n 2-Substraction \n 3- Division \n 4-Multiplication \n 5-Modulus\n");
        scanf("%d", &val);
        switch (val)
        {
        case 1:
            resultint = numberint1 + numberint2;
            resultfloat = numberfloat1 + numberfloat2;
            resultdouble = numberdouble1 + numberdouble2;
            printf(" SUM OF INTEGER %d\n", resultint);
            printf(" SUM OF FLOAT %0.3f\n", resultfloat);
            printf(" SUM OF DOUBLE %lf\n", resultdouble);

            break;
        case 2:
            resultint = numberint1 - numberint2;
            resultfloat = numberfloat1 - numberfloat2;
            resultdouble = numberdouble1 - numberdouble2;
            printf(" SUBTRACTION OF INTEGERS %d\n", resultint);
            printf(" SUBTRACTION OF FLOAT %0.3f\n", resultfloat);
            printf(" SUBTRACTION of double %lf\n", resultdouble);
            break;
        case 3:
            resultint = numberint1 / numberint2;
            resultfloat = numberfloat1 / numberfloat2;
            resultdouble = numberdouble1 / numberdouble2;
            printf(" DIVIDE OF INTEFER%d \n", resultint);
            printf(" DIVIDE OF FLOAT %0.3f\n", resultfloat);
            printf(" DIVIDE OF DOUBLE%lf\n", resultdouble);         
               break;
        case 4:
            resultint = numberint1 * numberint2;
            resultfloat = numberfloat1 * numberfloat2;
            resultdouble = numberdouble1 * numberdouble2;
            printf("MULTIPLICATION OF INTEGER%d\n", resultint);
            printf("MULTIPLICATION OF FLOAT%0.3f\n", resultfloat);
            printf("MULTIPLICATION OF DOUBLE%lf\n", resultdouble);  
            break;
        case 5:
            resultint = numberint1 % numberint2;
            printf("MODULUS OF INTEGER%d", resultint);}

        return 0;}