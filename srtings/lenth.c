#include<stdio.h>
int john(char *str)// inga vanthu pointer pass panrom kudukura letters evlo iruku nu chack panrarom inga

{
    int i=0;
    int count=0;
    while(str[i] != '\0')// kudukkura input null vara run panni chaarck panrrom 
    {
        count++;// 
        i++;
    }
    
    return count;
}
int main()
{
    char  str[50];
    scanf("%[^\n]",str);
    int ret=john(str);
    printf("%d",ret);
}