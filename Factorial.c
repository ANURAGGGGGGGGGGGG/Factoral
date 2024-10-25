#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number which u want factorial : ");
    scanf("%d", &n);
    int sum = 1;
    int result;
    for (int i = 0; i < n; n--)
    {
        sum *= n;
    }
    printf("%d", sum);
}