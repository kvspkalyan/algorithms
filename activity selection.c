#include<stdio.h>
void Max(int s[], int f[], int n)
{
	int i,temp;

	printf("Following activities are selected\n");
	i=0;
	printf("%d\t",i);
	for(i=1;i<n;i++)
	{
	    temp=f[0];
	    if(temp<=s[i])
	    {
	        temp=f[i];
	        printf("%d\t",i);
	    }
	}
}
int main()
{
	int s[] = { 1, 3, 0, 5, 8, 5 };
	int f[] = { 2, 4, 6, 7, 9, 9 };
	int n = sizeof(s) / sizeof(s[0]);


	Max(s, f, n);
	return 0;
}
