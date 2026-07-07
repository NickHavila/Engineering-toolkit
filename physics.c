#include <stdio.h>
#include <math.h>
#include "physics.h"

void physicsMenu(void)
{
    int optionphysics = -1;
    // physics menu
    do
    {
        float result;
        printf("\n=====================\n");
        printf("Physics Menu\n");
        printf("===================== \n");
        printf("1 - Average Velocity\n");
        printf("2 - Average Acceleration\n");
        printf("3 - Force\n");
        printf("4 - Energy\n");
        printf("5 - Projectile Motion\n");
        printf("0 - Return to main menu\n");

        printf("Enter your option: ");
        scanf("%d", &optionphysics);

        switch (optionphysics)
        {
        case 1:
        {
            float distance, time;
            printf("Enter distance (m): ");
            scanf("%f", &distance);
            do
            {
                printf("Enter time (s): ");
                scanf("%f", &time);
                if (time == 0)
                {
                    printf("Time must be greater than zero.\n");
                }
            } while (time <= 0);
            result = AverageVelocity(distance, time);
            printf("Average Velocity: %.2f m/s\n\n", result);
            break;
        }

        case 2:
        {
            float ivelocity, fvelocity, time;
            printf("Enter initial velocity (m/s): ");
            scanf("%f", &ivelocity);
            printf("Enter final velocity (m/s): ");
            scanf("%f", &fvelocity);
            do
            {
                printf("Enter time (s): ");
                scanf("%f", &time);
                if (time == 0)
                {
                    printf("Time must be greater than zero.\n");
                }
            } while (time <= 0);
            result = AverageAcceleration(ivelocity, fvelocity, time);
            printf("Average Acceleration: %.2f m/s^2\n\n", result);
            break;
        }

        case 3:
        {
            float mass, acceleration;
            do
            {
                printf("Enter mass (kg): ");
                scanf("%f", &mass);
                if (mass <= 0)
                    printf("Mass must be greater than zero.\n");
            } while (mass <= 0);
            do
            {
                printf("Enter acceleration (m/s^2): ");
                scanf("%f", &acceleration);
                if (acceleration == 0)
                    printf("Acceleration cannot be zero.\n");
            } while (acceleration == 0);
            result = Force(mass, acceleration);
            printf("Force: %.2f N\n\n", result);
            break;
        }

        case 4:
        {
            float mass, velocity;
            do
            {
                printf("Enter mass (kg): ");
                scanf("%f", &mass);
                if (mass <= 0)
                    printf("Mass must be greater than zero.\n");
            } while (mass <= 0);
            do
            {
                printf("Enter velocity (m/s): ");
                scanf("%f", &velocity);
                if (velocity == 0)
                    printf("Velocity cannot be zero.\n");
            } while (velocity == 0);
            result = Energy(mass, velocity);
            printf("Kinetic Energy: %.2f J\n\n", result);
            break;
        }

        case 5:
        {
            printf("This feature will be implemented in a future version.\n");
            printf("Returning to the physics menu...\n");
            break;
        }

        case 0:
        {
            printf("Returning to the main menu...\n");
            break;
        }

        default:
        {
            printf("Invalid option\n");
            break;
        }
        }
    } while (optionphysics != 0);
}

// function to calculate average velocity
float AverageVelocity(float distance, float time)
{
    return distance / time;
}

// function to calculate average acceleration
float AverageAcceleration(float ivelocity, float fvelocity, float time)
{
    return (fvelocity - ivelocity) / time;
}

// function to calculate force
float Force(float mass, float acceleration)
{
    return mass * acceleration;
}

// function to calculate kinetic energy
float Energy(float mass, float velocity)
{
    return (mass * pow(velocity, 2)) / 2;
}