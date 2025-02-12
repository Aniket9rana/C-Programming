#include <stdio.h>  

int main() {  
    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses;  

    // Input the values  
    
    scanf("%d", &budget);  
    scanf("%d", &numGuests);  
    scanf("%d", &foodCostPerGuest); 
    scanf("%d", &decorationCost);    
    scanf("%d", &musicCost); 
    scanf("%d", &extraExpenses);  
    
   
    int totalFoodCost = foodCostPerGuest * numGuests;   
    int totalCost = totalFoodCost + decorationCost + musicCost + extraExpenses;  

    
    if (totalCost > budget) {  
        printf("Celebration Denied\n");  
        return 0;  
    }  
    
    if (numGuests <= 5 || numGuests > 50) {  
        printf("Celebration Denied\n");  
        return 0;  
    }  
    
    int decorationUnderBudget = decorationCost < (0.30 * budget);  
    int foodUnderBudget = totalFoodCost < (0.50 * budget);  
    
   
    if (numGuests > 25 && musicCost <= 0) {  
        printf("Celebration Denied\n");  
        return 0;  
    }  
    
    if (decorationUnderBudget || foodUnderBudget) {  
        printf("Celebration Approved\n");  
    } else {  
        printf("Celebration Denied\n");  
    }  

    return 0;  
}