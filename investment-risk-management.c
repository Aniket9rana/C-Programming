#include <stdio.h>  

void determine_risk_level(int age, int income, int risk_tolerance) {  
    // Check for Low Risk Portfolio  
    if (age > 50) {  
        if (income > 75000 && risk_tolerance == 3) {  
            // Exception case: Above low risk  
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");  
        } else {  
            printf("Low Risk Portfolio: Suitable for conservative investments.\n");  
        }  
        return;  
    }  

    if (income <= 30000 && (risk_tolerance == 1 || risk_tolerance == 2)) {  
        printf("Low Risk Portfolio: Suitable for conservative investments.\n");  
        return;  
    }  

    // Check for Medium Risk Portfolio  
    if (age >= 30 && age <= 50) {  
        if (income <= 75000) {  
            if (risk_tolerance == 2) {  
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.\n");  
            } else {  
                printf("Low Risk Portfolio: Suitable for conservative investments.\n");  
            }  
            return;  
        } else { // income > 75000  
            if (risk_tolerance == 1 || risk_tolerance == 2) {  
                printf("Medium Risk Portfolio: Balanced risk for moderate returns.\n");  
            } else if (risk_tolerance == 3) {  
                printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");  
            }  
            return;  
        }  
    }  

    // Check for High Risk Portfolio  
    if (age < 30) {  
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");  
        return;  
    }  

    // If none of the conditions are met  
    printf("Unknown risk level.\n");  
}  

int main() {  
    int age, income, risk_tolerance;  

    // Input  
    
    scanf("%d", &age);  
   
    scanf("%d", &income);  
   
    scanf("%d", &risk_tolerance);  

    // Determine risk level  
    determine_risk_level(age, income, risk_tolerance);  

    return 0;  
}