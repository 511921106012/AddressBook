/*#include<stdio.h>
int main()
{
    char str[50];
    scanf("%s",str);
    printf("%s",str);

}/**/
#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^\n]",str);
    printf("%s",str);
}