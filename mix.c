#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fpA, *fpB;
	
	fpA = fopen("a.txt","r");
	fpB = fopen("b.txt","r");
	
	int i;
	char s[256];
	for(i=0;i<3;i++)
	{
		fgets(s, 256, fpA);
		fputs(s,stdout);
		//printf("%s",s);
		fgets(s, 256, fpB);
		fputs(s,stdout);
		//printf("%s",s);
	}
	
	fclose(fpA);
	fclose(fpB);
	
	return 0;
}