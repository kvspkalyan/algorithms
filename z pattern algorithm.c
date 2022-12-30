#include <stdio.h>
#include <string.h>
char zstr[100];
int zarr[100];
void comapre(int i)
{
    count=0;
    for(int j=0;zstr[j] != "#";j++)
    {
        if(zstr[j]==zstr[i+j])
        {
            count++;
        }
        else
        {
            break;                     
        }
    }
    zarr[]=
}
void search(char str[],char pat[])
{
    strcpy(zstr,pat);
    strcat(zstr,"#");
    strcat(zstr,str);
    printf("%s\n",zstr);
    for()
    
}
void main()
{
    char str[]="bcdabcbacabcda";
    char pat[]="bcd";
    search(str,pat);
    for(int i=0;i<strlen(zstr);i++)
    {
        printf("%d",zarr[i]);
    }
   
}
