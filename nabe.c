#include <stdio.h>
#define N 150
#define PRINT_NABE(val) (printf("%d!!\n",val))


void Nabeatu(int val)
{
	if(val % 3 == 0)
	{
		PRINT_NABE(val);
	}
	else
	{
		int tmp = val;
		while(1)
		{
			int mul = tmp / 10;
			int mod = tmp % 10;
			if(mod == 3){
				PRINT_NABE(val);
				return;
			}
			else if(mul == 0)
			{
				printf("%d\n",val);
				return;
			}
			
			tmp = mul;
		}
	}
}

int main()
{
	int i;
	for(i=0;i<=N;i++)
	{
		if(i==0)
			continue;
		Nabeatu(i);
	}
}
