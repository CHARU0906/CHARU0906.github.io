#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c,r[20],sen[100];
    scanf("%c",&c);
    printf("%c\n",c);
    scanf("%s",r);
    printf("%s\n",r);
    scanf("%[^\n]%*c",sen);
    printf("%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}