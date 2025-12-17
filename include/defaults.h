// File: defaults.h
// Description: Defaults settings configuration file

// The defaults.h file serves as a central default settings selector for different machine
// types, from DIY CNC mills to CNC conversions of off-the-shelf machines. The settings 
// files listed here are supplied by users, so your results may vary. However, this should
// give you a good starting point as you get to know your machine and tweak the settings for
// your nefarious needs.
// Ensure one and only one of these DEFAULTS_XXX values is defined in config.h

#ifndef defaults_h

// Grbl generic default settings. Should work across different machines.
#define DEFAULT_X_STEPS_PER_MM 250.0
#define DEFAULT_Y_STEPS_PER_MM 250.0
#define DEFAULT_Z_STEPS_PER_MM 250.0
#define DEFAULT_X_MAX_RATE 500.0                // mm/min
#define DEFAULT_Y_MAX_RATE 500.0                // mm/min
#define DEFAULT_Z_MAX_RATE 500.0                // mm/min
#define DEFAULT_X_ACCELERATION (10.0 * 60 * 60) // 10*60*60 mm/min^2 = 10 mm/sec^2
#define DEFAULT_Y_ACCELERATION (10.0 * 60 * 60) // 10*60*60 mm/min^2 = 10 mm/sec^2
#define DEFAULT_Z_ACCELERATION (10.0 * 60 * 60) // 10*60*60 mm/min^2 = 10 mm/sec^2
#define DEFAULT_X_MAX_TRAVEL 200.0              // mm
#define DEFAULT_Y_MAX_TRAVEL 200.0              // mm
#define DEFAULT_Z_MAX_TRAVEL 200.0              // mm
#define DEFAULT_STEP_PULSE_MICROSECONDS 10
#define DEFAULT_STEPPING_INVERT_MASK 0
#define DEFAULT_DIRECTION_INVERT_MASK 0
#define DEFAULT_STEPPER_IDLE_LOCK_TIME 25 // msec (0-254, 255 keeps steppers enabled)
#define DEFAULT_STATUS_REPORT_MASK ((BITFLAG_RT_STATUS_MACHINE_POSITION) | (BITFLAG_RT_STATUS_WORK_POSITION))
#define DEFAULT_JUNCTION_DEVIATION 0.01   // mm
#define DEFAULT_ARC_TOLERANCE 0.002       // mm
#define DEFAULT_REPORT_INCHES 0           // false
#define DEFAULT_INVERT_ST_ENABLE 0        // false
#define DEFAULT_INVERT_LIMIT_PINS 0       // false
#define DEFAULT_SOFT_LIMIT_ENABLE 0       // false
#define DEFAULT_HARD_LIMIT_ENABLE 0       // false
#define DEFAULT_HOMING_ENABLE 0           // false
#define DEFAULT_HOMING_DIR_MASK 0         // move positive dir
#define DEFAULT_HOMING_FEED_RATE 25.0     // mm/min
#define DEFAULT_HOMING_SEEK_RATE 500.0    // mm/min
#define DEFAULT_HOMING_DEBOUNCE_DELAY 250 // msec (0-65k)
#define DEFAULT_HOMING_PULLOFF 1.0        // mm

#endif
