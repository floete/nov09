#include <stdio.h>
#define BUF_SIZE 256

int FilePrint(FILE* fp)
{
	char s[BUF_SIZE];
	if(fgets(s,BUF_SIZE,fp))
	{
		fputs(s,stdout);
		return 0;
	}
	return -1;
}


int main()
{
	FILE *fpA, *fpB;
	fpA = fopen("a.txt","r");
	fpB = fopen("b.txt","r");
	
	int i;
	while(1)
	{
		if( FilePrint(fpA) )	break;
		if( FilePrint(fpB) )	break;
	}
	
	fclose(fpA);
	fclose(fpB);
	
	return 0;
}