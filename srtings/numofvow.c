#include<stdio.h>
int fun(char *str)
{
    char* jo ="aeiou";
    int count=0;
    int i=0;
    while(str[i])

    {
        int j=0;
        while(jo[j])
        {
            if(str[i]==jo[j]||str[i] + 32 == jo[j])
            {
                count++;
                break;
            }
            j++;
        }
        i++;
    }
    return count;
}
int main()
{
    char str[50];
    scanf("%[^\n]",str);
   int  ret=fun(str);
  // printf("number of count");
    printf("number if the count %d",ret);

}