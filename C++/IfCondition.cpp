#include <stdio.h>
int main () {
    int a;
    printf("Enter a Value: ");
    scanf("%d", &a);
    if (a>=0) //condition
        {
            printf("%d is a Positive number", a);
        }        
    return 0;
}