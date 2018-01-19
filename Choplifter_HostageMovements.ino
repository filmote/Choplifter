#include "src/utils/Arduboy2Ext.h"
#include "Enums.h"
#include "Images.h"
#include "src/utils/Stack.h"

void hostageMovements() {


  // Update hostages ..

  HostageStance randomTopLimit = HostageStance::Running_Left_1;

  for (uint8_t i = 0; i < NUMBER_OF_HOSTAGES; i++) {

    Hostage *hostage = &hostages[i];


    // Collect hostages ..

    if (inHelicopter < HELICOPTER_HOSTAGE_CAPACITY &&
        hostage->stance != HostageStance::Dead && hostage->stance <= HostageStance::Leaving_Dorm &&
        heli.xPos > 50 && heli.yPos >= 40 && absT(hostage->xPos - heli.xPos) < 5
        ) {    

      inHelicopter++;
      hostage->stance = HostageStance::In_Helicopter;
      hostage->countDown = (14 * inHelicopter);

    }

    // Deposit hostages at base ..

    else if (hostage->stance == HostageStance::In_Helicopter && 
             heli.yPos >= 40 &&                                                                                               
             ((heli.stance == 1 && heli.xPos < 24 && heli.xPos > -4) || 
              (heli.stance == -1 && heli.xPos < 22 && heli.xPos > 0) || 
              (heli.stance == 10 && heli.xPos < 22 && heli.xPos > -12))) {                

      hostage->countDown--;

      if (hostage->countDown == 0) {

        hostage->stance = HostageStance::Running_Right_1;
        hostage->countDown = 255;
        hostage->xPos = heli.xPos;
        inHelicopter--;

      }

    }

    // Hostages are safe ..
    
    else if (hostage->stance != HostageStance::Safe && hostage->xPos < -40) {                                                                                   

        hostage->stance = HostageStance::Safe;
        safe++;

    }

    // Hostages run wild!

    else {                                                                                                            

      switch (hostage->stance) {

        case HostageStance::Running_Left_1 ... HostageStance::Running_Left_3:

          hostage->stance = (HostageStance)((uint8_t)hostage->stance + 1);
          hostage->countDown--;
          hostage->xPos++;
          randomTopLimit = HostageStance::Waving_22;
          break;

        case HostageStance::Running_Left_4:

          hostage->stance = HostageStance::Running_Left_1;
          hostage->countDown--;
          hostage->xPos++;
          randomTopLimit = HostageStance::Waving_22;
          break;

        case HostageStance::Running_Right_1 ... HostageStance::Running_Right_3:

          hostage->stance = (HostageStance)((uint8_t)hostage->stance + 1);
          hostage->countDown--;
          hostage->xPos--;
          randomTopLimit = HostageStance::Waving_22;
          break;

        case HostageStance::Running_Right_4:

          hostage->stance = HostageStance::Running_Right_1;
          hostage->countDown--;
          hostage->xPos--;
          randomTopLimit = HostageStance::Waving_22;
          break;

        case HostageStance::Waving_11 ... HostageStance::Waving_12:

          hostage->stance = (HostageStance)((uint8_t)hostage->stance + 1);
          hostage->countDown--;
          randomTopLimit = HostageStance::Running_Right_4;
          break;

        case HostageStance::Waving_21 ... HostageStance::Waving_22:

          hostage->stance = (HostageStance)((uint8_t)hostage->stance + 1);
          if (hostage->stance > HostageStance::Waving_22) hostage->stance = HostageStance::Waving_11;
          hostage->countDown--;
          randomTopLimit = HostageStance::Running_Right_4;
          break;

        case HostageStance::Leaving_Dorm:

          hostage->stance = (HostageStance)((uint8_t)hostage->stance - 1);
          if (hostage->countDown == 0) {
            randomTopLimit = HostageStance::Running_Right_4;
          }
          break;

      }


      if (hostage->countDown == 0) {

        if (absT(hostage->xPos - heli.xPos) < 70) {

          if (random(0, 15) < 13) {

            hostage->stance = (hostage->xPos > heli.xPos ? (hostage->xPos > HOSTAGE_FAR_RIGHT_POS ? HostageStance::Running_Right_1 : HostageStance::Running_Left_1) : HostageStance::Running_Left_1);
            hostage->countDown = random(5, 15);

          }
          else {

            hostage->stance = HostageStance::Waving_11;
            hostage->countDown = random(2, 5);

          }

        }
        else {

          if (hostage->xPos > HOSTAGE_FAR_RIGHT_POS) { randomTopLimit = HostageStance::Running_Left_4; }  // Prevent hostage from crossing fence ..      

          hostage->stance = (HostageStance)random((uint8_t)HostageStance::Running_Left_1, (uint8_t)randomTopLimit + 1);

          switch (hostage->stance) {

            case HostageStance::Running_Left_1 ... HostageStance::Running_Right_4:
              hostage->countDown = random(5, 15);
              break;

            case HostageStance::Waving_11 ... HostageStance::Waving_22:
              hostage->countDown = random(2, 5);
              break;


          }

        }

      }

    }

  }

}