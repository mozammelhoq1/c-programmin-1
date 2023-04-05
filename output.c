#include <stdio.h>
int main ()
{
    int firstInput, secondInput;
    float floatInput;
    char charInput;
    scanf("%d %d %f %c",&firstInput,&secondInput,&floatInput,&charInput);
    printf("%d %d %0.2f %c", firstInput,secondInput,floatInput,charInput);
    return 0;
}
