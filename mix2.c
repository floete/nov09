#include <stdio.h>
#define BUF_SIZE 256

int main()
{
	FILE *fpA, *fpB;
	
	fpA = fopen("a.txt","r");
	fpB = fopen("b.txt","r");
	
	int i;
	char s[BUF_SIZE];
	printf("start\n");
	while(1)
	{

		if( fgets(s, BUF_SIZE, fpA) == NULL)
			break;
		fputs(s,stdout);
		
		if( fgets(s, BUF_SIZE, fpB) == NULL)
			break;
		fputs(s,stdout);
	}
	
	fclose(fpA);
	fclose(fpB);
	
	return 0;
}