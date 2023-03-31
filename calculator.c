#include <stdio.h>
#include <math.h>

int main() {
    int a,b;
    char c;
    printf("Enter operation (Enter 0 for square root)");
    scanf("%c",&c);
    if(c=='0')
    {
        scanf("%d",&a);
        float d=sqrt(a);
        printf("%.2f",d);
    }
    else
    {
    scanf("%d %d",&a,&b);
    if(c=='+')
    printf("%d",a+b);
    else if(c=='-')
    printf("%d",a-b);
    else if(c=='/')
    printf("%d",a/b);
    else if(c=='*')
    printf("%d",a*b);
    else if(c=='^')
    {
        int d=pow(a,b);
        printf("%d",d);
    }
    }
    return 0;
}