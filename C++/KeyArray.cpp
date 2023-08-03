#include <stdio.h>
int main() {
    int ara[]={1,2,3,5,8,13,2,34,55};
    int key,i,n;
    n=9;
    printf("Enter the key: ");
    scanf("%d", &key);
    for (i=0; i<n; i=i+1)
    {
        if (ara[i] == key)
        {
            printf("%d is found in the array.\n", key);
            break;
        }
    }
    if (i == n)
    {
        printf("%d is not found in the array.\n", key);
    }
    return 0;
}