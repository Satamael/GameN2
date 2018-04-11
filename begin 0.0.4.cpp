#include "TXLib.h"
#include <iostream>

 int HP=100;
 int MP=100;
 int MPdownSp;
 int Eat=100;
 int EatdownSp=2;
 int Smile=100;
 int SmiledownSp=3;
 int CST=30;
 int AST=10;
 int HPdownSp=1;
 int Coins = 0;
 bool ending = false;
 using namespace std;


 int main(){
    txCreateWindow(800,600);


    while(ending != true){

     char ones_string[100];
     sprintf(ones_string, "Здоровье %d  Манна %d   Еда %d   Лыба %d Золото %d", HP, MP, Eat, Smile, Coins);
     txSetFillColor(TX_BLACK);

     txClear();
     txTextOut(10, 30, health_string);
     txSetFillColor(TX_RED);
     txCircle(650, 150, 50);
     txRectangle(100, 100,HP*4+10,200);
     txSetFillColor(TX_LIGHTBLUE);
     txCircle(650, 250, 50);
     txRectangle(100, 202,MP*4+10,300);
     txSetFillColor(TX_GREEN);
     txCircle(650, 350, 50);
     txRectangle(100, 302,Eat*4 + 10,400);
     txSetFillColor(TX_YELLOW);
     txCircle(650, 450, 50);
     txRectangle(100, 402,Smile*4+10,500);
     txSleep(100);


        if(HP<=0 or Eat<=0){
            ending=true;
    }

        if(Smile<40){
            EatdownSp=EatdownSp+1;
    }

            if(Smile>50 and EatdownSp>1){
            EatdownSp=EatdownSp-1;
    }


           if (MP>0 and HP<=100 and txMouseButtons() & 1 and txMouseX()>600 and txMouseX()<700 and txMouseY()>100 and txMouseY()<200)
              {
              MP = MP - 1;
              HP = HP + 10;
              Coins = Coins +1;
            }

            if (MP>0 and Eat<=100 and txMouseButtons() & 1 and txMouseX()>600 and txMouseX()<700 and txMouseY()>300 and txMouseY()<400)
              {
            MP = MP - 1;
            Eat = Eat + 10;
            Coins = Coins +1;
            }

            if (MP>0 and Smile<=100 and txMouseButtons() & 1 and txMouseX()>600 and txMouseX()<700 and txMouseY()>400 and txMouseY()<500)
              {
              MP = MP - 1;
              Smile = Smile + 10;
              Coins = Coins +1;
            }

    if(HP>=HP-HPdownSp-1){
    HP=HP-HPdownSp;
    }
    if(Eat>=Eat-EatdownSp-1){
    Eat=Eat-EatdownSp;
    }
    if(HP<=Smile-SmiledownSp-1){
    Smile=Smile-SmiledownSp;
    }

    if (MP<=100){
           MP =MP + 3;
           }



    }
txClear();

return 0;
    }
