#include <stdio.h>
struct TIME
{
  int secs;
  int mins;
  int hrs;
};
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

int main()
{
    struct TIME startTime, stopTime, diff;

    printf("Enter start time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &startTime.hrs, &startTime.mins, &startTime.secs);

    printf("Enter stop time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &stopTime.hrs, &stopTime.mins, &stopTime.secs);

    // Calculate the difference between the start and stop time period.
    differenceBetweenTimePeriod(startTime, stopTime, &diff);

    printf("\nTIME DIFFERENCE: %d:%d:%d - ", startTime.hrs, startTime.mins, startTime.secs);
    printf("%d:%d:%d ", stopTime.hrs, stopTime.mins, stopTime.secs);
    printf("= %d:%d:%d\n", diff.hrs, diff.mins, diff.secs);

    return 0;
}

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
    if(stop.secs > start.secs){
        --start.mins;
        start.secs += 60;
    }

    diff->secs = start.secs - stop.secs;
    if(stop.mins > start.mins){
        --start.hrs;
        start.mins += 60;
    }

    diff->mins = start.mins - stop.mins;
    diff->hrs = start.hrs - stop.hrs;
}