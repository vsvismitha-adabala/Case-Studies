#include <stdio.h>
int main(){
int balance_inquiry,cash_withdrawal,cash_deposit,choice,amount;
printf("Enter Current Balance\n");
scanf("%d",&balance_inquiry);
printf("Enter:\n1 for Balance Inquiry\n2 for Cash Withdrawal\n3 for Cash Deposit\n");
scanf("%d",&choice);
switch(choice){
case 1 : printf("%d\n",balance_inquiry);
         break;
case 2 : printf("Enter Cash Withdrawal\n");
         scanf("%d",&cash_withdrawal);
         if(cash_withdrawal<=balance_inquiry){
         amount=balance_inquiry-cash_withdrawal;
         printf("Transaction successful\nRemaining balance is %d\n ",amount);
         }
         else
         printf("Insufficient balance\n");
         break;
case 3 : printf("Enter Cash Deposit\n");
         scanf("%d",&cash_deposit);
         amount=balance_inquiry+cash_deposit;
         printf("Deposit successful\nUpdated balance is %d\n",amount);
         break;
default: printf("Invalid option");
         break;
}
return 0;
}