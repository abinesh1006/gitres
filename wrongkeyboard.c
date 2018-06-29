#include<stdio.h>
#include <stdlib.h>
int isrequired(char a)
{
    return (a=='T' || a=='D' || a=='L' || a=='F');
}
int main()
{
    char name[100];
    int len,count=0,i,final=1;
    scanf("%s%n",name,len);
    for(i=0;i<len;i++)
    {
        if(isrequired(name[i]))
        {
            count++;
        }
    }
    while(count--)
    {
        final=final*2;
    }
    printf("%d",final);
    


}
