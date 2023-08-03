#include <stdio.h>
int main () {
    int i, N;
    long Sum=0;
    printf("\n Enter the last Number of the Series: ");
    scanf("%d", &N);
    printf("1+3+5+......+%d= ", N);
    for (i=1; i<=N; i=i+2) //condition
        {
            Sum = Sum+i;
        }
    printf("%d", Sum);
    return 0;
}