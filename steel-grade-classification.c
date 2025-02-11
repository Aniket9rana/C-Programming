#include <stdio.h>

int main() {

    int h,t;
    double c;
    scanf("%d",&h);
    scanf("%lf",&c);
    scanf("%d",&t);
    
    if(h>50 && c<0.7 && t>5600)
        printf("The grade of the steel is: 10\nAll of the conditions met.");
    else if(h>50 && c<0.7 && !(t>5600))
        printf("The grade of the steel is: 9\nTwo conditions met.");
    else if(!(h>50) && c<0.7 && t>5600)
        printf("The grade of the steel is: 8\nTwo conditions met.");
    else if(h>50 && !(c<0.7) && t>5600)
         printf("The grade of the steel is: 7\nTwo conditions met.");
    else if(h>50||c<0.7||t>5600)
        printf("The grade of the steel is: 6\nOnly one condition met.");
    else
        printf("The grade of the steel is: 5\nNone of the conditions met.");
    return 0;
}