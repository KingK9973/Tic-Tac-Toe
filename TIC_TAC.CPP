//Tic Tac Toe Game.
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
   start:
   int a[3][3]={5,6,7,8,9,10,11,12,13},i,j,k,x,y,t,win=0,turns=0;
   char ch;
   static int nod=0,dra=0,score[2]={0,0};
   nod++;
   clrscr();
   int dr=DETECT,md;
   initgraph(&dr,&md,"c:\\tc\\bgi");
   setbkcolor(GREEN);
   line(100,200,400,200);
   line(100,300,400,300);
   line(200,100,200,400);
   line(300,100,300,400);
   settextstyle(3,0,3);
   setcolor(BLUE);
   outtextxy(200,30,"Tic Tac Toe");
   gotoxy(15,7);
	cout<<"1";
   gotoxy(30,7);
	cout<<"2";
   gotoxy(45,7);
	cout<<"3";
   gotoxy(15,14);
	cout<<"4";
   gotoxy(30,14);
	cout<<"5";
   gotoxy(45,14);
	cout<<"6";
   gotoxy(15,21);
	cout<<"7";
   gotoxy(30,21);
	cout<<"8";
   gotoxy(45,21);
	cout<<"9";
   gotoxy(55,22);
	cout<<"RESULT";
   gotoxy(55,23);
	   cout<<"*************************";
   gotoxy(55,15);
	   cout<<"Player1-"<<score[0];
   gotoxy(55,16);
	   cout<<"Player2-"<<score[1];
   for(i=1;i<=3;i++)
   {
	   for(j=1;j<=3;j++)
	   {
		   re:
		   gotoxy(65,4);
			k=((i+j)%2+1);
			cout<<"enter player"<<k;
		   gotoxy(60,5);
			   cout<<"box no. from 1 to 9";
		   gotoxy(58,6);
			   cout<<"[]";
		   t=getch();
		   t=t-48;
		   if(t==1)
		   {
			sound(200);
			nosound();
			x=0;y=0;
			goto play;
		   }
		   if(t==2)
		   {
			sound(200);
			nosound();
			x=1;y=0;
			goto play;
		   }
		   if(t==3)
		   {
			sound(200);
			nosound();
			x=2;y=0;
			goto play;
		   }
		   if(t==4)
		   {
			sound(200);
			nosound();
			x=0;y=1;
			goto play;
		   }
		   if(t==5)
		   {
			sound(200);
			nosound();
			x=1;y=1;
			goto play;
		   }
		   if(t==6)
		   {
			sound(200);
			nosound();
			x=2;y=1;
			goto play;
		   }
		   if(t==7)
		   {
			sound(200);
			nosound();
			x=0;y=2;
			goto play;
		   }
		   if(t==8)
		   {
			sound(200);
			nosound();
			x=1;y=2;
			goto play;
		   }
		   if(t==9)
		   {
			sound(200);
			nosound();
			x=2;y=2;
			goto play;
		   }
		   else
		   {
			goto re;
		   }
		   play:
		   if((a[x][y]==1)||(a[x][y]==2))
		   {
			goto re;
		   }
		   if((a[x][y]!=1)&&(a[x][y]!=2))
		   {
			if(k==1)
			{
			   circle(100*x+150,100*y+150,50);
			   a[x][y]=k;
			   turns++;
			}
			if(k==2)
			{
			   line(x*100+100,y*100+100,x*100+200,y*100+200);
			   line(x*100+100,y*100+200,x*100+200,y*100+100);
			   a[x][y]=k;
			   turns++;
			}
		   }
			gotoxy(62,23);
			   if((a[0][0]==a[1][0])&&(a[1][0]==a[2][0]))
			   {
				cout<<"Player"<<k<<"wins";
				win=1;
				score[k-1]++;
			   }
			   if((a[0][0]==a[0][1])&&(a[0][1]==a[0][2]))
			   {
				cout<<"Player"<<k<<"wins";
				win=1;
				score[k-1]++;
			   }
			   if((a[0][0]==a[1][1])&&(a[1][1]==a[2][2]))
			   {
				cout<<"Player"<<k<<"wins";
				win=1;
				score[k-1]++;
			   }
			   if((a[1][0]==a[1][1])&&(a[1][1]==a[1][2]))
			   {
				cout<<"Player"<<k<<"wins";
				win=1;
				score[k-1]++;
			   }
			   if((a[2][0]==a[2][1])&&(a[2][1]==a[2][2]))
			   {
				cout<<"Player"<<k<<"wins";
				win=1;
				score[k-1]++;
			   }
			   if((a[2][0]==a[1][1])&&(a[1][1]==a[0][2]))
			   {
				cout<<"Player"<<k<<"wins";
				win=1;
				score[k-1]++;
			   }
			   if((a[0][2]==a[1][2])&&(a[1][2]==a[2][2]))
			   {
				cout<<"Player"<<k<<"wins";
				win=1;
				score[k-1]++;
			   }
			   if((a[0][1]==a[1][1])&&(a[1][1]==a[2][1]))
			   {
				cout<<"Player"<<k<<"wins";
				win=1;
				score[k-1]++;
			   }
			if(win==1)
			{
			   goto que;
			}
			if(turns==9)
			{
			   gotoxy(64,23);
			      cout<<"DRAW";
			   dra++;
			   goto que;
			}
	   }
   }
		   que:
		   gotoxy(61,24);
			   cout<<"Play again y/n";
		   ch=getch();
		   if((ch=='y')||(ch=='Y'))
		   {
			goto start;
		   }
		   else if((ch=='n')||(ch=='N'))
		   {
			goto end;
		   }
		   else
			goto que;
		   end:
		   closegraph();
		   cout<<"Final score is "<<score[k-1]<<"-"<<nod-dra-score[k-1];
		   gotoxy(20,10);
			   cout<<"Thanksfor playing this game";
		   getch();
}