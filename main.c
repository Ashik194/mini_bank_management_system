#include <stdio.h>
#include <conio.h>

void diposit();
void withdraw();
void check_blc();

int main() {
    int option;
    printf("###Banking Management System### \n\n");

    printf("1. Diposit \n");
    printf("2. Withdraw \n");
    printf("3. Check Balance \n\n");

    printf("Please Enter Option Number: ");
    scanf("%d",&option);

    switch(option){
        case 1:
            diposit();
        break;
        case 2:
            withdraw();
        break;
        case 3:
            check_blc();
        break;

        default: printf("\n Please Enter Right Option which is given to top \n\n");
    }

    getch();
    return 0;
}

void diposit(){
    int pwd, total_blc, money, blc=5000;
    printf("Please Enter your password: ");
    scanf("%d", &pwd);
    if(pwd == 123){
        printf("Enter your Diposit amount: ");
        scanf("%d",&money);
        total_blc = blc + money;
        printf("\n Your Diposit Amount is: %d",money);
        printf("\n Now Your Total Balance is: %d",total_blc);
    }
    else{
        printf("\n Wrong Password! Please Enter correct Password first \n\n");
    }
}


void withdraw(){
    int pwd, total_blc, money, blc=5000;
    printf("Please Enter your password: ");
    scanf("%d", &pwd);
    if(pwd == 123){
        printf("Enter your Withdrawal amount: ");
        scanf("%d",&money);
        total_blc = blc - money;
        printf("\n Your Withdrawal Amount is: %d",money);
        printf("\n Now Your Total Balance is: %d",total_blc);
    }
    else{
        printf("\n Wrong Password! Please Enter correct Password first \n\n");
    }
}


void check_blc(){
    int pwd, blc=5000;
    printf("Please Enter your password: ");
    scanf("%d", &pwd);
    if(pwd == 123){
        printf("\n\n Your Total Balance is: %d",blc);
    }
    else{
        printf("\n Wrong Password! Please Enter correct Password first \n\n");
    }
}
