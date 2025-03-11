#include <stdio.h>

int main() 
{
    int u;
    double b=0.0;
    scanf("%d",&u);
    if(u>=0&&u<=1000000)
    {
        if(u<=100)
          b=u*5;
        else if(u<=300)
            b=100*5+(u-100)*7;
        else if(u>300)
            b=100*5+200*7+(u-300)*10;
        
    if(b<=1200)
        b= b-(0.10*b);
      
        printf("The electricity bill is: %0.2f.",b);
        
        
    }
    else
        printf("Invalid Input!");
    
   
    
    return 0;
}