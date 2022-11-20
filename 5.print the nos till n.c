//my reg no is RA2211042010032
#include <stdio.h>
int main()
{ 
	int number;
	int n;
	number =1;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	printf("Numbers from 1 to %d: \n",n);
	while(number <= n)
	{
		printf("%d\n",number);
		number++;
	}
}
