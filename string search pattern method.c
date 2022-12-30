#include <stdio.h>
#include <string.h>
void search(char str[],char pat[])
{
    int count=0,n=strlen(str),m=strlen(pat);
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(pat[j]==str[i+j])
            {
                count ++;
            }
            else
            {
                break;
            }
        }
        if(count == m)
        {
            printf("%d",i);
        }
        count=0;
    }
}
void main()
{
    char str[]="bcdabcbacabcda";
    char pat[]="bcd";
    search(str,pat);
   
}
