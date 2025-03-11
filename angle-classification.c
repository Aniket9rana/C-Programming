#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x, n=0;
    scanf("%d", &x);
    n=x/360;
    if((x%360==0)&&x!=0)
        printf("Full Rotation");
    else
    {
         x=x-(n*360);
    
    if(x<90)
        printf("Acute Angle");
    else if(x==90)
        printf("Right Angle");
    else if(x>90&&x<180)
        printf("Obtuse Angle");
    else if(x==180)
        printf("Straight Angle");
    else if(x>180&&x<360)
        printf("Reflex Angle");
    }
    return 0;
}
