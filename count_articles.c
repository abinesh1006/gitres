#include<stdio.h>
#include <stdlib.h>

int main()
{   
    char s[1000];
    int count=0,i;
    scanf("%[^\n]s",s);
    if(s[0]=='a' && s[1]==' ')
    {
        count++;
    }
    for(i=1;i<strlen(s);i++)
    {
        if((s[i-1]==' ') && (s[i]=='a' || s[i]=='A' )&& !isalpha(s[i+1])) 
        {
            count++;
        }
        else if((s[i-1]==' ')&&((s[i]=='a' && s[i+1]=='n') ||(s[i]=='A' &&s[i+1]=='N') )&&!isalpha(s[i+2]))
        {
            count++;
           
        }
        else if((s[i-1]==' ')&&(s[i]=='t' || s[i]=='T') && (s[i+1]=='h' ||s[i+1]=='H')&&(s[i+2]=='e' || s[i+2]=='E') &&!isalpha(s[i+3]))
           {
       printf("the %d ",i);
            count++;
        }
    }
  
printf("%d",count);
}
