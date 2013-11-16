#include <stdio.h>
#define BUF_SIZE 256

// Read one line from a file, output it on the screen.
// ファイルから一行読み込み、画面に出力する
int Func(FILE* fp)
{
	char s[BUF_SIZE];
	if(fgets(s,BUF_SIZE,fp))
	{
		fputs(s,stdout);
		return 1;
	}
	return 0;
}


int main()
{
	FILE *fpA, *fpB;
	fpA = fopen("a.txt","r");
	fpB = fopen("b.txt","r");
	
	int i;
	while(1)
	{
		if( !Func(fpA) )	break;
		if( !Func(fpB) )	break;
	}
	
	fclose(fpA);
	fclose(fpB);
	
	return 0;
}