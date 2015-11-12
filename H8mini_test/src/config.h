
#include "defines.h"

// rate pids in pid.c
// angle pids in apid.h ( they control the rate pids)
// yaw is the same for both modes

// not including the "f" after float numbers will give a warning
// it will still work

// rate in deg/sec
// for low rates ( acro mode)
#define MAX_RATE 180.0f
#define MAX_RATEYAW 180.0f

// max angle for level mode (in degrees)
// low and high rates(angle?)
#define MAX_ANGLE_LO 35.0f
#define MAX_ANGLE_HI 55.0f

// max rate for rate pid in level mode
// this should usually not change unless faster / slower response is desired.
#define LEVEL_MAX_RATE_LO 360.0f
#define LEVEL_MAX_RATE_HI 360.0f

// disable inbuilt expo functions
#define DISABLE_EXPO

// use if your tx has no expo function
// also comment out DISABLE_EXPO to use
// -1 to 1 , 0 = no exp
// positive = less sensitive near center 
#define EXPO_XY 0.3f
#define EXPO_YAW 0.0f


// multiplier for high rates
// devo/module uses high rates only
#define HIRATEMULTI 2.0f
#define HIRATEMULTIYAW 2.0f


// failsafe time in uS
#define FAILSAFETIME 1000000  // one second


// battery saver
// do not start software if battery is too low
// flashes 2 times repeatedly at startup
#define STOP_LOWBATTERY

// under this voltage the software will not start 
// if STOP_LOWBATTERY is defined above
#define STOP_LOWBATTERY_TRESH 3.3f

// voltage too start warning
// volts
#define VBATTLOW 3.5f

// compensation for battery voltage vs throttle drop
// increase if battery low comes on at max throttle
// decrease if battery low warning goes away at high throttle
// in volts
#define VDROP_FACTOR 0.60f

// voltage hysteresys
// in volts
#define HYST 0.10f

// enable serial out on back-left LED
// serial is quite slow
//#define SERIAL

// Gyro LPF filter frequency
// gyro filter 0 = 260hz
// gyro filter 1 = 184hz
// gyro filter 2 = 94hz
// gyro filter 3 = 42hz
// 4 , 5, 6
#define GYRO_LOW_PASS_FILTER 2

// this works only on older boards
// on newer boards the gyro setting controls the acc as well
#define ACC_LOW_PASS_FILTER 3

// 
// disable motors for testing
//#define NOMOTORS


// channel for headless mode switch
// 0 - flip
// 1 - expert
// 2 - headfree
// 3 - headingreturn
// 4 - on always
// 5 - off always
#define HEADLESSMODE 5

// channel for rates switch
// 0 - flip
// 1 - expert
// 2 - headfree
// 3 - headingreturn
// 4 - on always
// 5 - off always
#define RATES 1

// 0 - flip
// 1 - expert
// 2 - headfree
// 3 - headingreturn
// 4 - on always
// 5 - off always
#define LEVELMODE 0




// do not change things below




// enable motors if pitch / roll controls off center (at zero throttle)
// possible values: 0 / 1
#define ENABLESTIX 0

#pragma diag_warning 1035 , 177 , 4017

#pragma diag_error 260 

// --fpmode=fast ON




















