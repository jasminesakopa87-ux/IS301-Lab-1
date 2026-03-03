/*  Problem:
     Calculate a customer's bill for five specific items(TV, Monitor,Flash Drive, Hard Drive, Deskjet Printer) based on user-input quantities, including a subtotal and an 8.35% sales tax.

    Algorithm:
    1.Define constants for unit prices and the tax rate (8.35%).
    2. Prompt the user to enter the quantity for each of the five items.
    3. Read the integer quantities from the keyboard.
    4. Calculate the subtotal for each item (quantity * unit price).
    5. Calculate the overall subtotal by summing all item costs.
    6. Calculate the sales tax amount (subtotal * 0.0835).
    7. calculate the final total (subtotal + tax).
    8. Display the formatted bill showing subtotal, tax, and total.

    Developed by: [Jasmine SAKOPA]
    Date: February 27, 2026

*/

#include <stdio.h>

int main(){

// 1. Constants for Prices
const float TV_PRICE = 400.00;
const float MONITOR_PRICE = 220.00;
const float FLASH_PRICE = 35.20;
const float HDD_PRICE = 150.00;
const float PRINTER_PRICE = 300.00;
const float TAX_RATE = 0.0835;

// 2. Variables
int qTV, qMon, qFlash, qHDD, qPrint;
float tTV, tMon, tFlash, tHDD, tPrint;
float subtotal, salesTax, total;

// 3. User Input
printf("How Many TVs Were Sold? ");
scanf("%d", &qTV);
printf("How Many Monitors Were Sold? ");
scanf("%d", &qMon);
printf("How Many Flash Drives Were Sold? ");
scanf("%d", &qFlash);
printf("How Many Hard Drives Were Sold? ");
scanf("%d", &qHDD);
printf("How Many Deskjet Printer Were Sold? ");
scanf("%d", &qPrint);

// 4. Calculations
tTV = qTV * TV_PRICE;
tMon = qMon * MONITOR_PRICE;
tFlash = qFlash * FLASH_PRICE;
tHDD = qHDD * HDD_PRICE;
tPrint = qPrint * PRINTER_PRICE;

subtotal = tTV + tMon + tFlash + tHDD + tPrint;
salesTax = subtotal * TAX_RATE;
total = subtotal + salesTax;

//5. Formatted Output
printf("\nQTY   DESCRIPTION     UNIT PRICE    TOTAL PRICE\n");
    printf("---   -----------     ----------    -----------\n");
    printf("%-5d TV              %10.2f    %11.2f\n", qTV, TV_PRICE, tTV);
    printf("%-5d Monitor         %10.2f    %11.2f\n", qMon, MONITOR_PRICE, tMon);
    printf("%-5d Flash Drive     %10.2f    %11.2f\n", qFlash, FLASH_PRICE, tFlash);
    printf("%-5d Hard Drive      %10.2f    %11.2f\n", qHDD, HDD_PRICE, tHDD);
    printf("%-5d Deskjet Printer %10.2f    %11.2f\n", qPrint, PRINTER_PRICE, tPrint);
    
    printf("                                    -----------\n");
    printf("                      Subtotal:     %11.2f\n", subtotal);
    printf("                      Tax:          %11.2f\n", salesTax);
    printf("                      Total:        %11.2f\n", total);
    printf("-----------------------------------------------\n");

return 0;
}
