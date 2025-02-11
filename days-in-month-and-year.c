#include <stdio.h>
#include <string.h>

int main() {

int m,y;
    
    scanf("%d",&m);
    scanf("%d",&y);
    if(m<1||m>12||y<1)
    {
      if(m<1||m>12)
          printf("Invalid Month\n");
       if(y<1)
           printf("Invalid Year");
    }

      else if((y%4==0 && y%100!=0)||(y%100==0&&y%400==0))
      {
    
    switch(m)
    {
        case 1:printf("31");
               break;
        case 2:printf("29");
               break;
        case 3:printf("31");
               break;
        case 4:printf("30");
               break;
        case 5:printf("31");
               break;
        case 6:printf("30");
               break;
        case 7:printf("31");
               break;
        case 8:printf("31");
               break;
        case 9:printf("30");
               break;
        case 10:printf("31");
               break;
        case 11:printf("30");
               break;
        case 12:printf("31");
               break;  
        
    }
      }
    else
    {
         switch(m)
      {
        case 1:printf("31");
               break;
        case 2:printf("28");
               break;
        case 3:printf("31");
               break;
        case 4:printf("30");
               break;
        case 5:printf("31");
               break;
        case 6:printf("30");
               break;
        case 7:printf("31");
               break;
        case 8:printf("31");
               break;
        case 9:printf("30");
               break;
        case 10:printf("31");
               break;
        case 11:printf("30");
               break;
        case 12:printf("31");
               break;  
     }
    }
    return 0;
}