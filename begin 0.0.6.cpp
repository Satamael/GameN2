#include "TXLib.h"
#include <iostream>
#include "Inits.cpp"
//#include "Rules.cpp"

 void Draw(int HP, int MP, int Eat, int Smile);




 int main(){
    txCreateWindow(800,600);


    while(ending != true){

     char ones_string[100];
     sprintf(ones_string, "Здоровье %d  Манна %d   Еда %d   Лыба %d Золото %d", HP, MP, Eat, Smile, Coins);
     txSetFillColor(TX_BLACK);
     txClear();
     txTextOut(10, 30, ones_string);
     Draw(HP,MP,Eat,Smile);
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
              MP = MP - MPdownSp;
              HP = HP + 10;
              Coins = Coins +1;
            }

            if (MP>0 and Eat<=100 and txMouseButtons() & 1 and txMouseX()>600 and txMouseX()<700 and txMouseY()>300 and txMouseY()<400)
              {
            MP = MP - MPdownSp;
            Eat = Eat + 10;
            Coins = Coins +1;
            }

            if (MP>0 and Smile<=100 and txMouseButtons() & 1 and txMouseX()>600 and txMouseX()<700 and txMouseY()>400 and txMouseY()<500)
              {
              MP = MP - MPdownSp;
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

    if (MP<100 - MPUpSp){
           MP =MP + MPUpSp;
           }



    }
txClear();

return 0;
    }

    void Draw(int HP, int MP, int Eat, int Smile){

     txSetFillColor(TX_RED);
     txCircle(650, 150, 50);
     txRectangle(100, 100,HP*4+10,200);
     txSetFillColor(TX_LIGHTBLUE);
     txRectangle(100, 202,MP*4+10,300);
     txSetFillColor(TX_GREEN);
     txCircle(650, 350, 50);
     txRectangle(100, 302,Eat*4 + 10,400);
     txSetFillColor(TX_YELLOW);
     txCircle(650, 450, 50);
     txRectangle(100, 402,Smile*4+10,500);

    }
