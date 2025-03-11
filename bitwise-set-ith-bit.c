#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,i;
    scanf("%d",&a);
    scanf("%d",&i);
    a=a|(1<<i);
    printf("%d",a);
    return 0;
}