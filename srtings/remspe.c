#include<stdio.h>
void remvow (char *str)
{
    int i=0;
    while(str[i])
    {
        if(str[i] ==' ')
        {
            int k=i;
            while(str[k])
            {
                str[k]=str[k+1];

                k++;
            }
            i--;
        }
        i++;
    }
}


int main()
{
    char str[50];
    scanf("%[^\n]",str);
  //  printf("%s",str);
    remvow(str);
    printf(" corrct da:   %s " ,str);

}