
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void main()
{
 int i=0,gd=0,gm;
 initgraph(&gd,&gm,"c:\\TC\\BG1");
 while(!kbhit())
 {
 int val=rand()%16;
 settextstyle(i/200,0,3);
 outtextxy(160,100,"happp new year");

 settextstyle(2,0,6);
 setcolor(11);
 outtextxy(145,140,"WISHING YOU A HAPPY FESTIVAL OF LIGHTS");
 outtextxy(180,160,"FILLED WITH ENJOY AND HAPPINES");

 setcolor(val);
 settextstyle(8,0,3);
 outtextxy(200,190,"FROM SHRIKANT");

 setcolor(val);
 rectangle(520,70,580,62);
 rectangle(100,70,580,62);
 arc(520,65,165,195,i/2);
 arc(160,65,345,15,i/2);
 line(120,400,150,450);
 line(120,400,85,450);
 line(85,450,150,450);
 arc(120,400,70,110,i);

 line(520,400,550,450);
 line(520,400,485,450);
 line(485,450,550,450);
 arc(520,400,70,110,i++);
 setfillstyle(5,LIGHTRED);
 ellipse(300,390,0,360,55,14);

 floodfill(300,390,val);
 ellipse(349,366,270,269,6,30);
 floodfill(349,366,val);
 ellipse(300,389,180,360,55,60);
 floodfill(320,400,val);
 line(360,390,370,395);
 line(360,380,370,384);
 line(360,370,370,373);
 line(360,360,370,360);
 line(360,350,370,349);
 line(360,340,369,337);
 line(358,335,365,330);
 line(354,330,364,324);
 line(352,326,355,320);
 line(350,330,349,320);

 line(350,330,349,320);

 line(330,395,340,390);
 line(330,384,340,380);
 line(330,373,340,370);
 line(330,360,340,360);
 line(330,349,340,350);
 line(330,337,339,340);
 line(334,329,342,333);
 line(337,324,346,330);
 line(343,320,348,326);
 delay(10);
 if(i==200)
 {
 i=0;
 cleardevice();
 }
 }
  getch();
  closegraph();
}