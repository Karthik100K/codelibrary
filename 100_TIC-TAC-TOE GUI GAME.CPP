 /* this code is created by karthik raikar
 press any button to start the game this game consitst a GUI interface of TIC TAC TOE game 
 run this code in Turbo CPP */

  #include<stdlib.h>
  #include<graphics.h>
  #include<dos.h>
  #include<iostream.h>
  #include<stdlib.h>
  #include<conio.h>
  int a[4][4];
  union REGS i,o;
  void border()

  {  i.x.ax=3;
    int86(0x33,&i,&o);
    i.x.cx=0;
    i.x.dx=100;
   settextstyle(0,0,0);
   setcolor(GREEN);
  rectangle(190,162,400,372);
  rectangle(200,172,390,362);
  setfillstyle(2,YELLOW);
  floodfill(191,163,GREEN);

  line(200,227,390,227);
  line(200,237,390,237);
  floodfill(201,228,GREEN);
  line(200,297,390,297);
  line(200,307,390,307);
  floodfill(201,298,GREEN);
  setcolor(RED);
  setfillstyle(2,RED);
  rectangle(260,172,265,362);
  rectangle(330,172,335,362);
  floodfill(261,243,RED);
  floodfill(331,173,RED);
  rectangle(20,20,60,40);
  rectangle(25,25,55,35);
  outtextxy(25,25,"START");
  rectangle(20,50,60,70);
  rectangle(25,55,55,65);
  outtextxy(25,55,"QUIT");
   settextstyle(10,0,2);
   outtextxy(180,120,"TIC TOC TOE");
    settextstyle(5,0,1);
    outtextxy(427,429,"KMR");



  }
  int mouseclick()
  {
   i.x.ax=3;
   int86(0x33,&i,&o);
   return(o.x.bx);
   }
   void mousepos(int *x,int *y)
   {
    i.x.ax=3;
    int86(0x33,&i,&o);
    *x=o.x.cx;
    *y=o.x.dx;
	      }

       void mouseshow()
       {
       i.x.ax=1;
       int86(0x33,&i,&o);
       }

    int positiony(int y)
    {

	if(y>176 && y< 211)
	  return 1;



	else
	    if(y>211  && y < 284)
	    return 2;

	else return 3;


    }
    int positionx(int x)
    {

	if(x>210 && x<244)
	    return 1;
	else
	    if(x>267 && x<321)
	    return 2;
	else
	return 3;


    }


    int matrice(int x,int y,int signal)
    {
       int j;

       int  xrow,yrow,xcol,ycol,x1dig,xdig,ydig,y1dig=0;
	xrow=yrow=xcol=ycol=x1dig=xdig=ydig=y1dig=0;
	if(signal==1)
	{
	    a[positiony(y)][positionx(x)]=1;
	}
	else
	    a[positiony(y)][positionx(x)]=2;
	    gotoxy(30,5);

	    for(int i=1;i<4;i++)
	    {
	    for(j=1;j<4;j++)
	    {
	      if(a[i][j]==1)
	      xrow++;
	      if(a[i][j]==2)
	      yrow++;
	      if(a[j][i]==1)
	      xcol++;
	      else
	      if(a[j][i]==2)
	      ycol++;
	      if(a[j][j]==1)
		 xdig++;
	      else
	      if(a[j][j]==2)
	      ydig++;

	      if(a[j][4-j]==1)
	      x1dig++;
	      else
	      if(a[j][4-j]==2)
	      y1dig++;

	    }




	    if(xrow==3 || yrow==3 || xcol==3 || ycol==3 || x1dig==3  || xdig==3  || y1dig==3  || ydig==3)
	     {
	     return 1;
	       }
	       xrow=yrow=xcol=ycol=x1dig=xdig=ydig=y1dig=0;

	    }

       return 0;
    }

  void main()
  {

  int gd=DETECT,gm,x,y;
  int l=0,def=0;
   int j=0;
   initgraph(&gd,&gm,"c:\\TC\\bgi");
   mouseshow();
   border();
gotoxy(10,10);
	  int n=0;
	  int k=0;
	   getch();

	  l=mouseclick();
   while(!kbhit())

   {

   mousepos(&x,&y);
    l=mouseclick();
      gotoxy(10,10);
      cout<<l<<"  "<<x<<"  "<<y<<"   ";


   while(x<=60 && x>=25 && y<=35 && y>=25 && l==0)
   {

  setcolor(BLACK);
  settextstyle(0,0,0);
  rectangle(20,20,60,40);
  rectangle(25,25,55,35);
  outtextxy(25,25,"START");
  delay(100);
  while(x<=60 && x>=25 && y<=35 && y>=25 && l==0)
  {
  setcolor(RED);
  mousepos(&x,&y);
    l=mouseclick();
  rectangle(20,20,65,45);
  rectangle(25,25,60,40);
  outtextxy(30,30,"START");
  delay(100);

} delay(100);
 setcolor(BLACK);
  mousepos(&x,&y);
    l=mouseclick();
  rectangle(20,20,65,45);
  rectangle(25,25,60,40);
  outtextxy(30,30,"START");

   setcolor(RED);
  settextstyle(0,0,0);
  rectangle(20,20,60,40);
  rectangle(25,25,55,35);
  outtextxy(25,25,"START");

  break;
  }
  if(x<=60 && x>=25 && y<=35 && y>=25 && l==1 || def==10)
  {

    cleardevice();
    def=0;
    delay(100);
    border();

    for(int i=1;i<4;i++)
	    for(j=1;j<4;j++)
	    a[i][j]=0;
    }
    if(x<=60 && x>=25 && y<=65 && y>=55 && l==1 )
    {
     break;

     }

    if(x>=191 && x<400 && y>=163 && y<366 && l==1 && def%2==0) //x<=252 && x>=202 && y<=223  && y>=177 && l==1)
    {
     i.x.ax=2;
     int86(0x33,&i,&o);
       if(matrice(x,y,1)==1)
       {

	settextstyle(3,0,3);
	outtextxy(181,77,"X is winner of match");
	delay(500);
	 def=9;
	 settextstyle(10,0,3);
     outtextxy(x,y-10,"x");
     getch();

       }

      setcolor(YELLOW);
     settextstyle(10,0,3);
     outtextxy(x,y-10,"x");
     mouseshow();
     def++;
     l=0;
     gotoxy(10,4);
	    for( int i=1;i<4;i++)
	    {
	    for(j=1;j<4;j++)
	    {
	    cout<<a[i][j]<<" ";
	    }
	    cout<<endl;
	    }
     delay(500);
     }
     if(x>=100 && y>=100 && l==1 && def%2==1)
     {
	  i.x.ax=2;
     int86(0x33,&i,&o);
     gotoxy(40,40);
     if(matrice(x,y,2)==1)
     {
       def=9;
     settextstyle(3,1,3);
      settextstyle(10,0,3);
     outtextxy(x,y-10,"o");
	outtextxy(181,77,"y is winner of match");
	getch();
      }
      setcolor(YELLOW);
     settextstyle(10,0,3);
     outtextxy(x,y-10,"o");
     mouseshow();
     def++;
     l=0;
     gotoxy(10,4);
	    for(int i=1;i<4;i++)
	    {
	    for(j=1;j<4;j++)
	    {
	    cout<<a[i][j]<<" ";
	    }
	    cout<<endl;
	    }
     delay(500);
     }





   }

   }
