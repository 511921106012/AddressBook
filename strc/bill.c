#include<stdio.h>
struct joe
{
    char jo[20];
    int pas;
    float item;
    float amount;

};
int main()
{
    int  totalqty=0;
        float totalamt=0;
        int n;

    struct joe var[100];
    for(int i=0;i<2;i++)
    {
    printf("Enter the item : ");
    scanf("%s",var[i].jo);
    printf("Enter the no of pac : ");
    scanf("%d",&var[i].pas);
    printf("enter the cost : ");
    scanf("%f",&var[i].item);
    
    var[i].amount=var[i].pas*var[i].item;
        
    totalqty=totalqty+var[i].pas;
    totalamt=totalamt+var[i].amount;
    }


    printf("-------------------------------------------------------\n");
    printf("S.No\tname\tQuantity\tcost\tamount\n");
    printf("-------------------------------------------------------\n");
    for(int i=0;i<2;i++)
    {
printf("%d.\t%s\t%d\t\t%.2f\t%.2f\n",i+1,var[i].jo,var[i].pas,var[i].item,var[i].amount);
    }
//printf("--------------------------------------------------------\n");
printf("--------------------------------------------------------\n");
printf("Total\t\t%d\t\t\t%.2f\n",totalqty,totalamt);
printf("-----------------------------------------------------------------");

}