#include <msp430.h>
#include "led.h"
#include "switches.h"
#include "statemachines.h"
#include "buzzer.h"



void next_state(int state) {
  green_off();
  red_off();
  switch(state) {

  case 1:
    flash(3);
    green_off();
    red_on();
    green_on();
    mario_jingle();
    red_off();
    green_off();
  break;

  case 2:
    flash(3);
    green_on();
    green_off();
    red_off();
    break;
  case 3:
    red_off();
    green_on();
    green_off();
    break;
  default:
    green_on();
    break;

  }
  // Turn on the green led to indicate it's ready for the next step.
  green_on();

}
