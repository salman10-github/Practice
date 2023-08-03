#include <stdio.h>
int main () {
    int Value1, Value2, Value3, Sum;
    float Avg;
    printf("Enter Value1: ");
    scanf("%d", &Value1);
    printf("Enter Value2: ");
    scanf("%d", &Value2);
    printf("Enter Value3: ");
    scanf("%d", &Value3);
    Sum= Value1+Value2+Value3;
    Avg= (float)Sum/3;
    printf("\n Value1= %d", Value1);
    printf("\n Value2= %d", Value2);
    printf("\n Value3= %d", Value3);
    printf("\n Sum= %d", Sum);
    printf("\n Avg= %2f", Avg);
    return 0;
}