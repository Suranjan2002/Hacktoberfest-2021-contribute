 #include <stdio.h> 
int main()
{
    int A, B, quotient = 0, remainder = 0;
    printf("Enter two numbers A and B : \n");
    scanf("%d%d", &A, &B);
    remainder = A % B;
    printf("Remainder when A/B is: %d", remainder);
    return 0;
}
