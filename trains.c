#include <stdio.h>

#define FIRST_CAR_LENGTH 10
#define NORMAL_CAR_LENGTH 8
#define CAR_CAPACITY 4

int main (void){
    int track_length;
    int train_length;
    int occupied_trains;
    float total_trains;

    printf("What is the total length of the track, in feet? \n");
    scanf("%d", &track_length);

    printf("What is the maximum length of the trains for the track, in feet? \n");
    scanf("%f", &train_length);

    occupied_trains = track_length;

    printf("%d", occupied_trains);
}
