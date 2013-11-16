#include <stdio.h>
#define BUF_SIZE 256

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


int main(int argc, char* argv[])
{
	if(argc != 3)
	{
		printf("引数の数が不適切です。\n");
		printf("./a.exe fileA.txt, fileB.txt \n");
		return -1;
	}
	
	FILE *fpA, *fpB;
	fpA = fopen( argv[1], "r" );
	fpB = fopen( argv[2], "r" );
	
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