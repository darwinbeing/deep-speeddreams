#ifndef SOUND_DEFINES_H
#define SOUND_DEFINES_H

#ifndef M_PI
#define EX_PI 3.1415926535
#else
#define EX_PI M_PI
#endif


#define SPEED_OF_SOUND 340.0
#define NB_CRASH_SOUND	6
#define NB_ENGINE_SOUND 6

#define ACTIVE_VOLUME 0x01
#define ACTIVE_PITCH 0x02
#define ACTIVE_LP_FILTER 0x04
#define ACTIVE_HP_FILTER 0x08
#define ACTIVE_BP_FILTER 0x10
#define ACTIVE_DISTORT_FILTER 0x20

#endif
