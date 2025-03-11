#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a;
    scanf("%d",&a);
    if((a&1)==1)
        printf("Odd");
    else
        printf("Even");
    return 0;
}