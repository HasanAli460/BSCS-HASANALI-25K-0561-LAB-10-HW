#include <stdio.h>

int main() {
    char categories[3][20] = {"Appetizers", "Main Course", "Desserts"};
    char items[3][3][30] = {
        {"Garlic Bread", "Soup", "Salad"},
        {"Steak", "Pasta", "Chicken"},
        {"Cake", "Ice Cream", "Fruit"}
    };
    float prices[3][3] = {
        {5.50, 4.75, 8.99},
        {15.99, 12.50, 11.25},
        {6.99, 3.50, 4.25}
    };
    
    printf("=== RESTAURANT MENU ===\n\n");
    
    printf("1. COMPLETE MENU:\n");
    for(int i = 0; i < 3; i++) {
        printf("\n%s:\n", categories[i]);
        for(int j = 0; j < 3; j++) {
            printf("  %s - $%.2f\n", items[i][j], prices[i][j]);
        }
    }
    
    printf("\n2. BUDGET-FRIENDLY OPTIONS (Under $10):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(prices[i][j] < 10) {
                printf("  %s (%s) - $%.2f\n", items[i][j], categories[i], prices[i][j]);
            }
        }
    }
    
    return 0;
}