#include<stdio.h>
#include<conio.h>

int main(void)
{
	char a;
	int b= 49;
	int i,j;
	
	printf("if you want to exit please enter 'q'\n");

	while((a=getch())!='q')
	{
		if(a==b)
			putch(a);
		for(i=1;i<9;i++)
			{
				if(a==b+i)
				for(j=0;j<=i;j++)				
				
					
						putch(a);
				


				

			}
	
		puts("");


	}


}