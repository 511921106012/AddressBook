#include<stdio.h>
// Text color macros
#define RESET   "\033[0m"
#define BLACK   "\033[0;30m"
#define RED     "\033[0;31m"
#define GREEN   "\033[0;32m"
#define YELLOW  "\033[0;33m"
#define BLUE    "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN    "\033[0;36m"
#define WHITE   "\033[0;37m"
int main()
{
 int a=1234,pin,i,choice,newpin1,newpin2,flag;
 long int totalbalance=2000000;
 for(i=0;i<3;i++)
 {
    printf(CYAN"Enter the pin:");

    scanf("%d",&pin);
    if(a==pin)

    {
      //  printf(RED"  it oky move to next");
        break;
    }
    
    
    else{
        printf(GREEN" entered pin is wrong\n ");
    } 
 }
 if (i==3)
 {
    printf( RED" three attempt completed  after 24 hours you can try:\n");
    return 0;
 }
 while(1)
 {
    printf( YELLOW"----------\n"RESET);
    printf(YELLOW"   MENU   \n");
    printf(YELLOW"----------\n"RESET);
    printf("The choice are\n");
    printf("1.Check balance\n");
    printf("2.Withdraw\n");
    printf("3.Deposit\n");
    printf("4.Change password\n");
    printf("5.Exit\n");
    printf(YELLOW"----------\n"RESET);
    printf("Enter the choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf(GREEN"Balance: %ld\n"RESET,totalbalance);
        break;
        case 2:
        {
            printf(YELLOW"enter the  withdraw amount:"RESET);
            long int withdraw;
            scanf("%ld",&withdraw);
            if(totalbalance>=withdraw)
            {
                printf("successfully withdraw the amount\n The amount is %ld\n",withdraw);
                totalbalance=totalbalance-withdraw;
                printf(GREEN"   Balance:%ld\n"RESET,totalbalance);
                
                

            }
            else{
                printf(RED" insufficIent balance\n"RESET);
                printf(GREEN"balance: %ld\n"RESET,totalbalance);
                

            }
            break;
        }
        case 3:
        printf(YELLOW"Enter the deposit amount:"RESET);
        long int deposit;
        scanf("%ld",&deposit);
        totalbalance=totalbalance+deposit;
        printf("Successfully deposit the amount: %ld\n",deposit);
        printf(GREEN"Current balance: %ld\n"RESET,totalbalance);
        break;
        case 4:
        {
            int repin;
            printf(BLUE"For reseting your pin\n"RESET);
            for(i=0;i<3;i++)
            {
                printf(BLUE"Enter the previous pin:"RESET);
                scanf("%d",&repin);
                if(a==repin)
                {
                    int j;
                    for(j=0;j<3;j++)
                    {
                        printf("Enter the new pin:");
                        scanf("%d",&newpin1);
                        printf("Re-Enter the new pin  again:");
                        scanf("%d",&newpin2);
                        if(newpin1==newpin2)
                        {
                            a=newpin1;
                            printf(GREEN"your pin changed successfully.\n"RESET);
                            break;


                        }
                        else
                        {
                            printf(RED" pin Missmatch! try again later.\n"RESET);
                        }
                        
                    }
                    
                    
                    if(j==3)
                    {
                        printf(YELLOW"three attempt completed after 24 hours you can try\n"RESET);
                        return 0;
                    }
                    break;
                   
                }
                else{
                    printf(RED"incorrect previous password\n"RESET);
                }
                
            }
            if(i==3)
            {
                printf(YELLOW"Three attempts completed. try after 24 hours.\n"RESET);
                return  0;
            }
            
            
        }
        break;
        case 5:
        {
        printf(RED"-------------------------\n");
        printf("Thank for using our ATM\n");
        printf("-------------------------\n"RESET);
        return 0;
        }

    }

 }

}