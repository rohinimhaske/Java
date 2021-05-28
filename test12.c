#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	 printf("Enter any number: ");
    scanf("%d", &n);
	printf("Enter all natural no from 1 to %d",n);
	for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
	

