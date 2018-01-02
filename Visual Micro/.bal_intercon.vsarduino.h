/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Nano w/ ATmega328, Platform=avr, Package=arduino
*/

#define __AVR_ATmega328p__
#define __AVR_ATmega328P__
#define ARDUINO 163
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define F_CPU 16000000L
#define ARDUINO 163
#define ARDUINO_AVR_NANO
#define ARDUINO_ARCH_AVR
extern "C" void __cxa_pure_virtual() {;}

void set_last_read_angle_data(unsigned long time, float x, float y, float z, float x_gyro, float y_gyro, float z_gyro);
inline unsigned long get_last_time();
inline float get_last_x_angle();
inline float get_last_y_angle();
inline float get_last_z_angle();
inline float get_last_gyro_x_angle();
inline float get_last_gyro_y_angle();
inline float get_last_gyro_z_angle();
int read_gyro_accel_vals(uint8_t* accel_t_gyro_ptr);
void calibrate_sensors();
void cambios();
void cambios2();
//
//
void motor_i(int motor_izq);
void motor_d(int motor_der);
int MPU6050_read(int start, uint8_t *buffer, int size);
int MPU6050_write(int start, const uint8_t *pData, int size);
int MPU6050_write_reg(int reg, uint8_t data);

#include "F:\MICROCONTROLADORES\arduino\arduino-1.6.3\hardware\arduino\avr\variants\eightanaloginputs\pins_arduino.h" 
#include "F:\MICROCONTROLADORES\arduino\arduino-1.6.3\hardware\arduino\avr\cores\arduino\arduino.h"
#include <bal_intercon.ino>
