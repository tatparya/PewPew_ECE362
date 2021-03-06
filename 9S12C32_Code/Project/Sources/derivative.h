/*
 * Note: This file is recreated by the project wizard whenever the MCU is
 *       changed and should not be edited by hand
 */

/* Include the derivative-specific header file */
#include <mc9s12c32.h>

#pragma LINK_INFO DERIVATIVE "mc9s12c32"

typedef struct TargetData
{
  unsigned char score;
  unsigned char maxScore;
  unsigned char player;
  signed char time_as_player;
  int *atd_address;
} Target;
