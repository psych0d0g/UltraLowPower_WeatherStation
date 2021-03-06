#ifndef _SETUP_h
#define _SETUP_h

const uint8_t DEVICE_ID = 1;                // Unique identifier of this device
const uint8_t NUMBER_OF_SENSORS = 3;		// How many sensors deliver data

const uint8_t GIVEUP_ON_MASTER_AFTER = 5;	// If master havn't confirmed getting our data within XX seconds, we give up and continue measuring
const uint16_t WAKE_MASTER_EVERY = 3600;	// Every XX seconds we wake up ESP master for it to poll our data
const uint16_t MEASUREMENT_EVERY = 120;		// How often we take a measurement from our sensors


#endif

