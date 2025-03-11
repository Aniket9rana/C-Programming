#include <stdio.h>

int main() {

     int t=0,a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("a = %d\n",a);
    printf("b = %d",b);   
    return 0;
}