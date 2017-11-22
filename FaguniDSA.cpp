#include<stdio.h>
#include<string.h>
#define a 256
int rabin(char[], char[], int );
int result(int);



int main()
{	static int count;
int ch;
	int q = 101; 
		int y,r;
			char pat[50];
			char txt1[] = "DELHI";
			char txt2[] = "HOCKEY";
				char txt3[] = "PEACOCK";
				char txt4[] = "NARENDRA MODI";	
				printf("WELCOME TO QUIZ MODULE!");
					printf("\n");
				printf("TRY AND ATTEMPT THE FOLLOWING QUESTIONS-");		
					printf("\n");
				printf("WHAT IS THE CAPITAL OF INDIA?");
				printf("\n");
				gets(pat);
				y= rabin(pat, txt1, q);
				result(y);
					printf("WHAT IS THE NATIONAL SPORT OF INDIA?");
				printf("\n");
				gets(pat);
				y= rabin(pat, txt2, q);
				result(y);
					printf("WHAT IS THE PRIME MINISTER OF INDIA?");
				printf("\n");
				gets(pat);
				y= rabin(pat, txt4, q);
				result(y);
				printf("WHAT IS THE NATIONAL BIRD OF INDIA?");
				printf("\n");
				gets(pat);
				y= rabin(pat, txt3, q);
				r=result(y);
				printf("SCORE=%d",r);
				printf("\n");
				if(r>=3){
					printf("GOOD ATTEMPT!");
				}
				else{
					printf("BAD ATTEMPT!");
				}
	/*int ch;
	static int count;
	printf("1.ATTEMPT QUESTIONS");	
	printf("\n");
	printf("2.ASSESS YOUR SCORE");
	printf("\n");
	printf("CHOOSE ONE");
	printf("\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:	
		int q = 101; // A prime number
		int a,r;
			char pat[50];
			char txt1[] = "DELHI";
			char txt2[] = "PEACOCK";
				printf("WHAT IS THE CAPITAL OF INDIA?");
				printf("\n");
				gets(pat);
				a= search(pat, txt1, q);
				result(a);
				printf("WHAT IS THE NATIONAL BIRD OF INDIA?");
				printf("\n");
				gets(pat);
				a= search(pat, txt2, q);
				r=result(a);
				printf("SCORE=%d",r);
				break;
	case 2: //	if(r>=3)
				//printf("GOOD ATTEMPT!");
				//else
				//printf("PRACTICE MORE!");
				//break;
	
	}*/		

	return 0;
}
int rabin(char pat[], char txt[], int q)
{
	int M = strlen(pat);
	int N = strlen(txt);
	int i, j,counter=0;
	int pa = 0; 
	int te = 0;
	int rk = 1;

	for (i = 0; i < M-1; i++)
		rk = (rk*a)%q;


	for (i = 0; i < M; i++)
	{
		pa = (a*pa + pat[i])%q;
		te = (a*te + txt[i])%q;
	}

	
	for (i = 0; i <= N - M; i++)
	{

	
		if ( pa == te )
		{
			
			for (j = 0; j < M; j++)
			{
				if (txt[i+j] != pat[j])
					break;
			}

			if (j == M)
				counter++;
			
		}

		if ( i < N-M )
		{
			te = (a*(te - txt[i]*rk) + txt[i+M])%q;

		
			if (te < 0)
			te = (te + q);
		}
	}
	return counter;
}
int result(int x){
	static int count;
	
	if(x==0)
	{	count--;
	}
	else
	{
		count++;
	}
	return count;
}

