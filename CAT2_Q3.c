#include<stdio.h>
int main (){
    float hours_worked,hourly_wage,gross_pay,taxes,net_pay;
    
    //prompt the user to enter values
    printf("enter hours worked in a week:");
    scanf("%f", &hours_worked);

    printf("enter hourly wage:");
    scanf("%f", &hourly_wage);

    if(hours_worked<=40){
        gross_pay=hours_worked*hourly_wage;
    }else{
        gross_pay=(40*hourly_wage)+((hours_worked-40)*hourly_wage*1.5));
    }
    if(gross_pay<=600){
        taxes=gross_pay*0.15;
    }else{
        taxes=(600*0.15)+((gross_pay-600)*0.20);
    }
    net_pay=gross_pay-taxes;

    //print the values
    printf("gross pay: %.2f\n",gross_pay);
    printf("taxes: %.2f\n",taxes);
    printf("net_pay: %.2f\n",net_pay);
    
    return 0;
}