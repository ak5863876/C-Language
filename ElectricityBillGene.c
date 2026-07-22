int main(){
    char name[20];
    printf("\nEnter your name: ");
    scanf("%s", name);     

    int units;
    printf("\nEnter the no. of units consumed: ");
    scanf("%d", &units);

    int rate;
    int totalBillAmount;

    if(units <= 100){
        printf("\nAED 2.00 per unit\n");
        rate = 2;
        totalBillAmount = units * rate;
    } else if(units <= 200){
        printf("\nAED 3.00 per unit\n");
        rate = 3;
        totalBillAmount = units * rate;
    } else {
        printf("\nAED 5.00 per unit\n");
        rate = 5;
        totalBillAmount = units * rate;
    }

    printf("\n================================\n");
    printf("\nELECTRICITY BILL\n");
    printf("\n================================\n");
    printf("\nCustomer Name: %s\n", name); 
    printf("\nUnits Consumed: %d\n", units);   
    printf("\nRate Per Unit: AED %d\n", rate);  
    printf("\nTotal Amount: AED %d\n", totalBillAmount); 
    printf("\n================================\n");
    return 0;
}