#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{
	int i;
	int x_min=1 , y_min=1;
	int x_max=79,y_max=25;
	clrscr();
	loop:
	
	              //left to right printing:
	for(i=x_min;i<x_max;i++)
	{
		delay(10);
		gotoxy(i,y_min);
		printf("*");
	}
	
	            //top to bottom printing:
	for(i=y_min;i<y_max;i++)
	{
		delay(10);
		gotoxy(x_max,i);
		printf("*");
	}
	
	            //right to left printing:
	for(i=x_max;i>x_min;i--)
	{
		delay(10);
		gotoxy(i,y_max);
		printf("*");
	}
	
	            //bottom to top printing:
	for(i=y_max;i>y_min;i--)
	{
		delay(10);
		gotoxy(x_min,i);
		printf("*");
	}
	
	x_min+=1;
	x_max-=1;
	y_min+=1;
	y_max-=1;
	
	if(x_min == 15 )
	{
		getch();
		return 0;   //Instead of return 0 you can also write goto lable:
	}
	else
	{
		goto loop;
	}
                // lable:
	getch();    // warning : Unreachable code -
	return 0;   // - or remove it.
}
