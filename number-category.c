#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    if(n>=-1000&&n<=1000)
    {
    if(n%2==0&&n%3==0&&!(n%5==0))
        printf("A");
    else if(n>20&&(n==21||n==33||n==14||n==10||n==15||n==22||n==6))
        printf("B");
    else if(((n%3==0)^(n%7==0))&&n>=10&&n<=99)
        printf("C");
    else if (n==1||n==4||n==9||n==16||n==25||n==36||n==49||n==64||n==81||n==100||n==121||n==144||n==169||n==196)
        printf("D");
    else
        printf("E");
    }
    return 0;
}