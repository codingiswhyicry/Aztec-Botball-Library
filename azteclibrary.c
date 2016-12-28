#include <kipr/botball.h>

//moving functions
void moveFor(int port1, int port2, int velocity, int milliseconds)
{
	mav(int port1, int velocity);
	mav(int port2, int velocity);
	msleep(int milliseconds);
	ao();
}

void move5(int port1, int port2, int velocity)
{
	mav(int port1, velocity);
	mav(int port2, velocity);
	msleep(5000);
	ao();
}

void move10(int port1, int port2, int velocity)
{
	mav(int port1, int velocity);
	mav(int port2, int velocity);
	msleep(10000);
	ao();
}

//waiting functions
void waitAndMove(int port1, int port2, int velocity, int wait, int milliseconds)
{
	msleep(int seconds);
	mav(int port1, int velocity);
	mav(int port2, int velocity);
	msleep(int milliseconds);
	ao();
}


void driveUntilBump(int port1, int port2, int velocity, int analog)
{
	mav(int port1, int velocity);
	mav(int port2, int velocity);
	wait_for_touch(8);
	ao();
}

void waitFor5()
{
	msleep(5000);
}

//turning functions
void turn90(int port1, int port2)
{
	mav(int port1, 500);
	mav(int port2, -500);
	msleep(1500);
	ao();
}

void turnFor(int port1, int seconds)
{
	mav(int port1, 500);
	msleep(int seconds);
	ao();
}
//clearing functions
void clearAll()
{
	ao();
	disable_servos();
}

