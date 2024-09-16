#include<stdio.h>
int main()
{
	long int inc;
	float tax, net;
	printf("Enter your income: ");
	scanf("%d", &inc);
	if(inc<=250000)
	{ 
	printf("NO TAX");
	}
	else if(inc>=250001 && inc< 500000)
	
	{ 
	tax = 5;
	net= inc - (inc*(tax/100));
	}
	else if(inc>=500001 && inc < 1000000)
	
	{
		tax = 20;
	 net= inc - (inc*(tax/100));
	}
	else if(inc< 1000000)
	
	{
		tax = 30;
	 net= inc - (inc*(tax/100));
	}
	printf("Total Income: %d\n",inc);
	printf("Tax deducted: %.2f\n",tax);
	printf("Net Income: %.2f\n",net);
	return 0;
}