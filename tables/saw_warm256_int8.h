#include "Arduino.h"
#include <avr/pgmspace.h>

unsigned int saw_warm_LUTsize=256; 
 
prog_char saw_warm_data [] PROGMEM = {3, 13, 26, 39, 50, 59, 65, 69, 69, 68, 64,
59, 54, 48, 44, 39, 36, 34, 33, 33, 33, 34, 35, 36, 36, 35, 34, 33, 30, 28, 25,
23, 21, 19, 17, 17, 16, 16, 16, 16, 16, 16, 16, 15, 14, 13, 11, 10, 8, 7, 6, 5,
4, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1, 0, -1, -2, -3, -4, -4, -5, -5, -6, -6, -6, -6,
-6, -6, -6, -6, -7, -7, -8, -9, -10, -10, -11, -11, -11, -12, -12, -12, -12,
-12, -12, -12, -12, -12, -13, -13, -13, -14, -14, -15, -15, -15, -15, -16, -16,
-16, -16, -16, -16, -16, -16, -16, -16, -16, -17, -17, -17, -17, -18, -18, -18,
-18, -18, -18, -18, -18, -19, -18, -18, -18, -19, -19, -19, -19, -19, -19, -19,
-20, -20, -20, -20, -20, -20, -20, -19, -19, -19, -19, -19, -19, -19, -19, -20,
-20, -20, -20, -20, -20, -20, -20, -20, -20, -20, -20, -19, -19, -19, -19, -19,
-20, -20, -20, -20, -21, -21, -21, -21, -21, -20, -20, -20, -19, -19, -19, -19,
-19, -19, -20, -20, -20, -21, -21, -21, -21, -21, -20, -20, -20, -19, -19, -18,
-18, -18, -19, -19, -19, -20, -20, -21, -21, -21, -21, -20, -20, -19, -18, -18,
-17, -17, -17, -17, -18, -19, -19, -20, -21, -21, -21, -21, -20, -20, -18, -17,
-16, -15, -15, -15, -15, -16, -17, -19, -21, -23, -24, -24, -24, -23, -20, -16,
-10, -3, 6, 17, };
