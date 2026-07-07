#ifndef PHYSICS_H
#define PHYSICS_H

void physicsMenu(void);

float AverageVelocity(float distance, float time);
float AverageAcceleration(float ivelocity, float fvelocity, float time);
float Force(float mass, float acceleration);
float Energy(float mass, float velocity);

#endif