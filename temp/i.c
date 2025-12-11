#include<stdio.h>
int main()
{
        char str[20];
        char str1[20];
        char str2[20];
        int ct1,ct2,ct3;
        float p1,p2,p3;
        printf("Enter the Item 1: ");
        scanf("%[^\n]",str);
        printf("Enter no of pcs: ");
        scanf("%d",&ct1);
        printf("Enter the cost: ");
        scanf("%f",&p1);
        printf("Enter the Item 2: ");
        scanf(" %[^\n]",str1);
        printf("Enter no of pcs: ");
        scanf("%d",&ct2);
        printf("Enter the cost: ");
        scanf("%f",&p2);
        printf("Enter the Item 3: ");
        scanf(" %[^\n]",str2);
        printf("Enter no of pcs: ");
        scanf("%d",&ct3);
        printf("Enter the cost: ");
        scanf("%f",&p3);
        float sum=(p1*ct1)+(p2*ct2)+(p3*ct3);
        printf("------------------------------------------------------------\n");
        printf("S.No  Name            Quantity        Cost            Amount\n");
        printf("------------------------------------------------------------\n");
        printf("%-6.6s%-16.16s%8d%12.2f%18.2f\n","1.",str,ct1,p1,p1*ct1);
        printf("%-6.6s%-16.16s%8d%12.2f%18.2f\n","2.",str1,ct2,p2,p2*ct2);
        printf("%-6.6s%-16.16s%8d%12.2f%18.2f\n","3.",str2,ct3,p3,p3*ct3);
        printf("------------------------------------------------------------\n");
        printf("%-5.5s%25d%30.2f\n","Total",ct1+ct2+ct3,sum);
        printf("------------------------------------------------------------\n");
}