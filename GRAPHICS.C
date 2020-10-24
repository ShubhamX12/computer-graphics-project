#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include "graphic.h"c

void main()
{    int gd=DETECT,gm;
     printf("!!! ALAPHABET PRINTING PROJECT !!!");
     initgraph(&gd,&gm,"c:\\turboc3\\bgi");
     line(43,50,43,400);
     line(500,50,500,400);
     line(43,400,500,400);
     line(43,50,500,50);
     line(43,50,500,400);
     line(43,400,500,50);
     line(43,125,226,50);
     line(43,275,226,400);
     line(43,225,500,225);
     line(270,50,270,400);
     line(300,50,500,125);
     line(300,400,500,275);
     sleep(5);
     cleardevice();
     da();





 getch();
}