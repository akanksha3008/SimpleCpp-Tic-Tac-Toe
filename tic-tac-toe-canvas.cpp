#include<simplecpp>
int x,y,val,chk_1,chk_2,chk_3,chk_4,chk_5,chk_6,chk_7,chk_8,chk_9,i,wx1,wy1,wx2,wy2,ch1,ch2,xn1,yn1,value,pl;
bool flag=false;
 void player1();
 void player2();
 void check_condition();
 void p_win();
double x1,v,x2,y2;
char ans='n';
main_program
{ initCanvas("TIC-TAC-TOE",1000,800);
    Rectangle r0(500,400,1000,800),r1(200,200,100,10),r2(200,260,10,120),r3(270,260,10,120),r4(290,260,10,120),
    r5(315,205,50,10),r6(315,315,50,10);
   Circle c1(420,260,30),c2(850,260,30);
   Rectangle r7(420,260,120,7),r8(420,260,120,7),r9(550,200,100,10),r10(550,260,10,120),r11(625,260,10,120),
   r12(663,260,10,120),r13(644,260,30,10),r14(715,260,10,120),r15(740,205,50,10),r16(740,315,50,10),
   r17(850,260,120,7),r18(850,260,120,7),r19(420,420,100,10),r20(420,480,10,120),r21(500,480,10,120),r22(535,425,70,10),r23(570,480,10,120),
   r24(535,535,70,10),r25(610,480,10,120),r26(630,425,40,10),r27(620,480,20,10),r28(630,535,40,10);

    r0.setColor(COLOR(20,80,100));r0.setFill();
   r1.setColor(COLOR("red")); r2.setColor(COLOR("red"));r3.setColor(COLOR("red"));r4.setColor(COLOR("red"));
   r5.setColor(COLOR("red")); r6.setColor(COLOR("red")); c1.setColor(COLOR("yellow"));c2.setColor(COLOR("yellow"));
   r9.setColor(COLOR("red"));  r10.setColor(COLOR("red")); r11.setColor(COLOR("red")); r12.setColor(COLOR("red"));
    r13.setColor(COLOR("red")); r14.setColor(COLOR("red")); r15.setColor(COLOR("red"));r16.setColor(COLOR("red"));
   r19.setColor(COLOR("red"));r20.setColor(COLOR("red")); r21.setColor(COLOR("red"));r22.setColor(COLOR("red"));
   r23.setColor(COLOR("red")),r24.setColor(COLOR("red"));r25.setColor(COLOR("red"));r26.setColor(COLOR("red"));
   r27.setColor(COLOR("red")); r28.setColor(COLOR("red"));

   r1.setFill();  r2.setFill(); r3.setFill();r4.setFill();r5.setFill(); r6.setFill(); c1.setFill();
    r9.setFill(); r10.setFill(); r11.setFill(); r12.setFill();  r13.setFill();c2.setFill();r14.setFill();
   r7.setFill(true);r15.setFill();r16.setFill();r17.setFill();r18.setFill();r19.setFill();
   r21.setFill();r22.setFill();r23.setFill(); r24.setFill(); r25.setFill();r26.setFill();r27.setFill();
   r28.setFill();

   r7.rotate(0.78539); r8.setFill(true);  r20.setFill(true); r17.setFill();
   r8.rotate(5.49); r11.rotate(0.35); r12.rotate(5.95); r17.rotate(0.785); r18.rotate(5.49);
   wait(2.5);
   r1.hide(); r2.hide(); r3.hide(); r4.hide(); r5.hide(); r6.hide(); c1.hide(); r7.hide();r8.hide();
   r9.hide();r10.hide();r11.hide(); r12.hide();r13.hide(); c2.hide(); r14.hide(); r15.hide();r16.hide();
   r19.hide(); r20.hide(); r17.hide(); r18.hide();r21.hide();r22.hide();r23.hide(); r24.hide();
   r25.hide();r26.hide();r27.hide();r28.hide(); r0.hide();
   do{
        chk_1=2;chk_2=2;chk_3=2;chk_4=2;chk_5=2;chk_6=2;chk_7=2;chk_8=2;chk_9=2; ch1=0;ch2=0;
         flag=false; i=0; ans='n';  wx1=0; wx2=0; wy1=0; wy2=0; pl=0;

      Line l1(140,190,140,610),l2(280,190,280,610),l3(420,190,420,610),l4(560,190,560,610),
      l5(140,190,560,190),l6(140,330,560,330),l7(140,470,560,470),l8(140,610,560,610);
    while(i<4)
   {  player1();
    check_condition();
     if(flag==true)
       { wait(0.5);break;}
        ch1=0;   ch2=0;
     player2();
     check_condition();
     if(flag==true)
        { wait(0.5); break;}
     i=i+1;
   }
   if(flag==false)
    {  player1();
          check_condition();  }

   if(flag==false)
  {   Rectangle dr(810,350,200,100);
      dr.setColor(COLOR("yellow"));  dr.setFill();   dr.imprint();
      Text t7(810,350,"DRAW !!!");
      t7.imprint(); wait(1.5);
  }
   Rectangle sq(500,400,1000,800);
    sq.setColor(COLOR("yellow")); sq.setFill();  sq.imprint();

   Text t6(500,350,"Do you want to play again?");
    Rectangle h1(450,450,100,50),h2(575,450,100,50);
     h1.setColor(COLOR("green")); h2.setColor(COLOR("red"));
    h1.setFill(); h2.setFill();
    Text y(450,450,"YES"); Text n(575,450,"NO");
    value=getClick();
    xn1=value/65536;
    yn1=value%65536;
   if((xn1>=400)&&(xn1<=500)&&(yn1<=475)&&(yn1>=425))
         ans='y';
    else if((xn1>=525)&&(xn1<=625)&&(yn1<=475)&&(yn1>=425))
          ans='n';
  Rectangle r100(500,400,1000,800);
    r100.setColor(COLOR("white")); r100.setFill();  r100.imprint();
  }while(ans=='y');
  wait(1);
}

void player1()
{  x=0;y=0;
  Rectangle p101(800,330,100,40);
  p101.setColor(COLOR(255,130,0));   p101.setFill();
  Text t1(800,330,"PLAYER 1");
  val=getClick();
  x1=val/65536;  v=(val%65536);

    if((x1>=140)&&(x1<280)&&(v>=190)&&(v<330))
         { if(chk_1==2)
              {x=210;y=260; chk_1=1;}
           else
           { Text t4(700,500,"Already filled!!"); player1();}
         }
    else if((x1>=280)&&(x1<420)&&(v>=190)&&(v<330))
            { if(chk_2==2)
              {x=350;y=260;chk_2=1;}
               else
               {Text t4(700,500,"Already filled!!"); player1();  }
            }
    else if((x1>=420)&&(x1<560)&&(v>=190)&&(v<330))
             {if(chk_3==2)
              {x=490;y=260;chk_3=1;}
              else
              {Text t4(700,500,"Already filled!!"); player1();}
            }
      else if((x1>=140)&&(x1<280)&&(v>=330)&&(v<470))
            {  if(chk_4==2)
               {x=210;y=400;chk_4=1;}
              else
              {Text t4(700,500,"Already filled!!");player1();}
            }
     else if((x1>=280)&&(x1<420)&&(v>=330)&&(v<470))
             {if(chk_5==2)
                {x=350;y=400;chk_5=1;}
              else
              {Text t4(700,500,"Already filled!!"); player1();}
            }
     else if((x1>=420)&&(x1<560)&&(v>=330)&&(v<470))
             {if(chk_6==2)
                {x=490;y=400;chk_6=1; }
               else
              {Text t4(700,500,"Already filled!!"); player1();}
             }
     else if((x1>=140)&&(x1<280)&&(v>=470)&&(v<610))
             {if(chk_7==2)
                 {x=210;y=540;chk_7=1;}
               else
              {Text t4(700,500,"Already filled!!"); player1();}
             }
     else if((x1>=280)&&(x1<420)&&(v>=470)&&(v<610))
            {if(chk_8==2)
                {x=350;y=540;chk_8=1;}
              else
              {Text t4(700,500,"Already filled!!");  player1();}
             }
     else if((x1>=420)&&(x1<560)&&(v>=470)&&(v<610))
              {if(chk_9==2)
                 {x=490;y=540;chk_9=1;}
                else
              {Text t4(700,500,"Already filled!!");player1();}
            }

    Line l9(x-20,y-20,x+20,y+20),l10(x-20,y+20,x+20,y-20);
        l9.setColor(COLOR(255,130,0)); l10.setColor(COLOR(255,130,0));
        l9.imprint(); l10.imprint();
}

void player2()
{    x=0;y=0;
    Rectangle p201(800,400,100,40);
    p201.setColor(COLOR("green"));  p201.setFill();
    Text t3(800,400,"PLAYER 2");
    val=getClick();
    x2=val/65536;  y2=val%65536;
   if((x2>=140)&&(x2<280)&&(y2>=190)&&(y2<330))
         { if(chk_1==2)
              {x=210;y=260; chk_1=0;}
           else
           { Text t4(700,500,"Already filled!!");player2();}
         }
   else if((x2>=280)&&(x2<420)&&(y2>=190)&&(y2<330))
            { if(chk_2==2)
              {x=350;y=260;chk_2=0;}
               else
               {Text t4(700,500,"Already filled!!");player2();}
            }
    else if((x2>=420)&&(x2<560)&&(y2>=190)&&(y2<330))
             {if(chk_3==2)
              {x=490;y=260;chk_3=0;}
              else
              {Text t4(700,500,"Already filled!!"); player2();}
            }
   else if((x2>=140)&&(x2<280)&&(y2>=330)&&(y2<470))
            {
              if(chk_4==2) {x=210;y=400;chk_4=0;}
              else
              {Text t4(700,500,"Already filled!!"); player2();}
            }
   else if((x2>=280)&&(x2<420)&&(y2>=330)&&(y2<470))
             {if(chk_5==2)
                {x=350;y=400;chk_5=0;}
              else
              {Text t4(700,500,"Already filled!!"); player2();}
            }
   else if((x2>=420)&&(x2<560)&&(y2>=330)&&(y2<470))
             {if(chk_6==2)
                {x=490;y=400;chk_6=0;}
               else
              {Text t4(700,500,"Already filled!!");player2();}
             }
   else if((x2>=140)&&(x2<280)&&(y2>=470)&&(y2<610))
             {if(chk_7==2)
                 {x=210;y=540;chk_7=0;}
               else
              {Text t4(700,500,"Already filled!!"); player2();}
             }
    else if((x2>=280)&&(x2<420)&&(y2>=470)&&(y2<610))
             {if(chk_8==2)
                {x=350;y=540;chk_8=0;}
              else
              {Text t4(700,500,"Already filled!!");  player2();}
             }
    else if((x2>=420)&&(x2<560)&&(y2>=470)&&(y2<610))
              {if(chk_9==2)
                 {x=490;y=540;chk_9=0;}
                else
              {Text t4(700,500,"Already filled!!"); player2();}
             }
   Circle c(x,y,25);
  c.setColor(COLOR("green")); c.setFill(); c.imprint();

}
void check_condition()
{  if((chk_1==chk_3)&&(chk_2==chk_3))
    {  if(chk_1==1)
          {ch2=1;flag=true;  wx1=210; wy1=260; wx2=490;wy2=260;pl=1; p_win();}
         else if(chk_1==0)
          { ch2=1; pl=2; flag=true; wx1=210; wy1=260; wx2=490;wy2=260; p_win();  }
    }
   if((chk_1==chk_5)&&(chk_5==chk_9))
     { if(chk_1==1)
          { flag=true;  wx1=210; wy1=260; wx2=490;wy2=540; pl=1; p_win(); }
         else if(chk_1==0)
          { flag=true; pl=2;  wx1=210; wy1=260; wx2=490;wy2=540;  p_win();}
      }
   if((chk_1==chk_4)&&(chk_4==chk_7))
     {if(chk_1==1)
          { wx1=210;wy1=260;wx2=210; wy2=540; pl=1;  flag=true; ch1=1;  p_win();}
         else if(chk_1==0)
          {  pl=2; wx1=210;wy1=260;wx2=210; wy2=540; flag=true;ch1=1; p_win();}
     }
   if((chk_3==chk_5)&&(chk_5==chk_7))
     { if(chk_3==1)
          { flag=true;wx1=490; wy1=260; wx2=210;wy2=540;pl=1; p_win();  }
         else if(chk_3==0)
          { pl=2;flag=true;wx1=490; wy1=260; wx2=210;wy2=540; p_win();}
      }
   if((chk_7==chk_8)&&(chk_8==chk_9))
     { if(ch2==0)
      { if(chk_7==1)
          { ch2=1;flag=true; pl=1;  wx1=210; wy1=540; wx2=490;wy2=540; p_win(); }
         else if(chk_7==0)
          {ch2=1;flag=true;pl=2;  wx1=210; wy1=540; wx2=490;wy2=540; p_win();}
      }
    }
  if((chk_3==chk_6)&&(chk_6==chk_9))
     { if(ch1==0)
        {  if(chk_3==1)
          {ch1=1;  flag=true;wx1=490; wy1=260; wx2=490;wy2=540; pl=1; p_win(); }
         else if(chk_3==0)
          {ch1=1;pl=2; flag=true;wx1=490; wy1=260; wx2=490;wy2=540;  p_win();}
        }
      }
    if((chk_2==chk_5)&&(chk_5==chk_8))
     {  if(ch1==0)
       {  if(chk_2==1)
            {flag=true; wx1=350; wy1=260; wx2=350;wy2=540;pl=1; p_win();}
        else if(chk_2==0)
          { flag=true;pl=2; wx1=350; wy1=260; wx2=350;wy2=540; p_win();}
        }
     }
    if((chk_4==chk_6)&&(chk_5==chk_6))
     { if(ch2==0)
        {if(chk_4==1)
          { flag=true;   wx1=210; wy1=400; wx2=490;wy2=400;pl=1; p_win();}
         else if(chk_4==0)
          { flag=true; pl=2;  wx1=210; wy1=400; wx2=490;wy2=400;  p_win();}
         }
     }
}
void p_win()
{  Line win(wx1,wy1,wx2,wy2);  win.imprint();
    Rectangle r_win(700,400,150,75);
  if(pl==1){
     r_win.setColor(COLOR(255,130,0));   r_win.setFill();
    Text t5(700,400,"PLAYER 1 WINS");
     repeat(3)
       {  wait(0.5);
         t5.hide(); r_win.hide();
         wait(0.35);
        t5.show();
        r_win.show(); wait(0.15);
        }
    }
    else if(pl==2)
    {  r_win.setColor(COLOR("green"));  r_win.setFill();
       Text t6(700,400,"PLAYER 2 WINS");
       repeat(3)
       {  wait(0.5);
         t6.hide(); r_win.hide();
         wait(0.35);  t6.show();  r_win.show(); wait(0.15);
       }
    }
}

