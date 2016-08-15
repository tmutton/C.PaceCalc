#include <stdio.h>

int main()
{
    // variables
    // user inputs
    double distance;
    int timeMinutes, timeSeconds;

    // internal calculations
    int timeInSeconds, paceInSeconds, paceMinutes, paceSeconds;

    printf("**Pace Calculator**\n");
    printf("Enter the distance (miles)\n");
    scanf("%lf", &distance);
    printf("Enter the time (minutes)\n");
    scanf("%d", &timeMinutes);
    printf("Enter the time (seconds)\n");
    scanf("%d", &timeSeconds);

    // convert total time to seconds
    timeInSeconds = (60 * timeMinutes) + timeSeconds;

    // calculate the pace (seconds)
    paceInSeconds = timeInSeconds / distance;

    // convert the pace (seconds) to minutes and seconds
    paceMinutes = (paceInSeconds / 60);
    paceSeconds = (paceInSeconds % 60);

    printf("The pace was %d minutes %d seconds per mile", paceMinutes, paceSeconds);
    return 0;
} 