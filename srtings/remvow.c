#include<stdio.h>
void remvow(char *str)
{
    int i=0;
    char *vowel="aeiou";
    while(str[i])
    {
        int j=0;
        while(vowel[j])
        {


            if(str[i]==vowel[j]||str[i]- 32 ==vowel[j])
           {
            int k=i;
            while(str[k])
            {
                str[k]=str[k+1];
                k++;
            }
            i--;

          }
          j++;
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
    printf("%s" ,str);

}