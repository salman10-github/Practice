#include <stdio.h>
int main () {
    int num;
    printf("Enter the Value: ");
    scanf("%d", &num);
    if (num%3 == 0 && num%5 == 0)
        {
            printf("FizzBuzz\n");
        }
    else if (num%3 == 0)
        {
            printf("Fizz\n");
        }
    else if (num%5 == 0)
        {
            printf("Buzz\n");
        }
    return 0;
}