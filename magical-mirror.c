#include <stdio.h>

int main() {

       int a, t=0;
    scanf("%d",&a);
        if(a%2==0&&a>10)
            t++;
         if(a%3==0&&a>15)
                t++;
         if(a%7==0)
                t++;
    if(a>0&&a<=1000000)
    {
               
     if(t==3)
            printf("The verdict for the number %d is: SUPERNATURAL",a);
     else if(t==2)
            printf("The verdict for the number %d is: MIRACULOUS",a);
     else if(t==1)
            printf("The verdict for the number %d is: MAGICAL",a);
     else if(t==0)
           printf("The verdict for the number %d is: NORMAL",a);
    }
    
            else
            printf("The verdict for the number %d is: INVALID",a);
    return 0;
}