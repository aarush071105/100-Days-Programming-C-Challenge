//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float costprice, sellprice, profit, loss, percentage;
    printf("Enter Cost Price: ");
    scanf("%f", &costprice);
     printf("Enter Selling Price: ");
    scanf("%f", &sellprice);
    if (sellprice > costprice) {
        profit = sellprice - costprice;
        percentage = (profit / costprice) * 100;
        printf("You made a Profit of %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (costprice > sellprice)  {
        loss = costprice - sellprice;
        percentage = (loss / costprice) * 100;
        printf("You made a Loss of %.2f\n", loss);
        printf("Loss Percentage = %.2f%%", percentage);
    }
    else {
        printf("No Profit , No Loss - You Broke Even");
    
    }
    return 0;
}