#include<stdio.h>
#include<conio.h>
int main(void)
{
    int A[]={10,21,28,34,43,51,67,77,90,98,99};
    int t=43,i,n;
    n = sizeof(A)/sizeof(A[0]);
    int start = 0,end = n-1;
    while(start <= end)
    {
        int mid = (start+end)/2;
        if(t==A[mid])
        {
            printf("search is successful");
            break;
        }
        if(t<A[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
}
