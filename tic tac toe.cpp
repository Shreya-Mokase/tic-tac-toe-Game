#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char a[3][3]={'1','2','3','4','5','6','7','8','9'};
int n,k,X,O,i,j;

void display(char a[3][3]);
char win();
void game();

int main()
{
	
  
	printf("\tTIC TAC TOE\n");
	printf("\nfor player 1 symbol is : X");
	printf("\nfor player 2 symbol is : O\n");
	printf("\n");	
	display(a);
	printf("\nenter the respective position");
	printf("\n");
	game();	
	printf("\n\n      THANKYOU..     \n\nGAMEOVER");	

return 0;
}
void display (char a[3][3])
{    
    
    for(i=0;i<=2;i++)
	{ printf("\t|");
		for(j=0;j<=2;j++)
		{
			printf(" %c |",a[i][j] );
		}
		printf("\n\t|---|---|---|\n");
	}	
}
char win()
{
   	 if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')
	 return 'X';
	 if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')
	 return 'X';
	 if(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X')
	 return 'X';
	 if(a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X')
	 return 'X';
	 if(a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X')
	 return 'X';
	 if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')
	 return 'X';
	 if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')
	 return 'X';
	 if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')
	 return 'X';
	 else if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O')
	 return 'O';
	 else if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O')
	 return 'O';
	 else if(a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O')
	 return 'O';
	 else if(a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O')
	 return 'O';
	 else if(a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O')
	 return 'O';
	 else if(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O')
	 return 'O';
	 else if(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O')
	 return 'O';
	 else if(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O')
	 return 'O';
	 else	
     return '-';
	 
}
void game()
{
	int cnt=0;
	while(1) //infinite loop until we break it..
	{
		printf("turn for player 1(X)");
		cnt++;
		scanf("\n%c",&n);
		for(i=0;i<=2;i++)
     	{ 
		for(j=0;j<=2;j++)
		{
			if(n==a[i][j])
			 {
		    	if(cnt%2==0)
                	a[i][j]='O';			
			   else
		       		a[i][j]='X';	
	     	 }

       }
       }
   	
system("cls");
printf("\n");
display(a);
k=win();
if(k=='X')
{
	printf("\n congratulations..player 1 won..!!!");
	cnt=0;
	break;
}
else if(k=='-' && cnt==9)
{
	printf("\n match draw..!!");
	cnt=0;
	break;
}
printf("turn for player 2(O)");
		cnt++;
		scanf("\n%c",&n);
		for(i=0;i<=2;i++)
     	{ 
		for(j=0;j<=2;j++)
		{
			if(n==a[i][j])
			{
			if(cnt%2==0)
             a[i][j]='O';			
			else
			 a[i][j]='X';	
	     	}
      }
      }
   	
system("cls");
printf("\n");
display(a);
k=win();
if(k=='O')
{
	printf("\n congratulations..player 2 won..!!!");
	cnt=0;
	break;
}

	}
}
