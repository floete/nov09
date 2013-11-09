#define N 5
#include <stdio.h>
#include <time.h>
#include <math.h>

int cards[N];

void Init()
{
	int i;
	for(i = 0; i < N ; i++)
		cards[i] = i + 1;
	
	srand(time(NULL));
}

void Print()
{
	int i;
	for(i = 0; i < N ; i++)
		printf("%d, ",cards[i]);
	printf("\n");
}

void Shuffle()
{
	int tmp, r1, r2;
	do 
	{
		r1 = rand() % N;
		r2 = rand() % N;
	}while(r1 == r2);
	
	tmp = cards[r1];
	cards[r1] = cards[r2];
	cards[r2] = tmp;
}


int main()
{
	Init();
	
	int count = 0;
	int repeat = 0;
	
	printf("How many times do you repeat? > ");
	scanf("%d,",&repeat);
	
	while(1)
	{
		printf("[%d]	",count++);
		Print();
		Shuffle();
		if(count > repeat)
			break;
	}
	
	return 0;
}