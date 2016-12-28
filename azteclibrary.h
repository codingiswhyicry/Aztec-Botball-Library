#include <kipr/botball.h>

#ifndef azteclibrary_h
#define azteclibrary_h

void moveFor(int port1, int port2, int velocity, int milliseconds);

void move5(int port1, int port2, int velocity);

void move10(int port1, int port2, int velocity);

void waitAndMove(int port1, int port2, int velocity, int wait, int milliseconds);

void driveUntilBump(int port1, int port2, int velocity, int analog);

void waitFor5();

void turn90(int port1, int port2);

void turnFor(int port1, int seconds);

void clearAll();

#endif
