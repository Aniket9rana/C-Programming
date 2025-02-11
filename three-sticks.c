#include <stdio.h>

int main() {

    int a,b,c;
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
    
    if(a==b&&b==c&&c==a)
    {
        printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Equilateral\nAll sides are of the same length.");
    }
    else if(a==b||b==c||c==a)
    {
         printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Isosceles\nExactly two sides are equal.");
    }
    else
    {
         printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Scalene\nAll sides are of different lengths.");
    }
        
    }
    
    else
    {
         printf("Lengths: [%d, %d, %d]\n",a,b,c);
        printf("Type: Invalid\nCannot form a valid shape.");
    }

    return 0;
}