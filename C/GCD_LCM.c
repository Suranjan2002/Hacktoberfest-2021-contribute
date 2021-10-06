#include <stdio.h>

int GCD(int a, int b){
    if(a == 0){
        return b;
    }
    return (GCD(b % a, a));
}

int LCM(int x, int y){
    return (x / GCD(x,y)) * y;
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d %d", GCD(a,b), LCM(a,b));
    }
}