#include<stdio.h>
#include <stdlib.h>
int main()
{
    int a,c=0;
    scanf("%d",&a);
    while(a!=1)
    {
        a= a%2==0 ? a/2:((a*3)+1);
        c++;
    }
    printf("%d",c);
}

/* Example Input/Output 1:
Input:
5
Output:
5
Explanation:
The series is 5 16 8 4 2 1
Example Input/Output 2:
Input:
12
Output:
9
Explanation:
The series is 12 6 3 10 5 16 8 4 2 1
*/
