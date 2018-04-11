  #include "TXLib.h"
 #include <iostream>
 #pragma once

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
