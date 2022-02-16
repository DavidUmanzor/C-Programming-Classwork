#include <stdio.h>
#define FIRST_CAR_LENGTH 10
#define NORMAL_CAR_LENGTH 8
#define CAR_CAPACITY 4


int main(){

    //Car variables
    int car_length, max_car_length, num_cars, total_car_length;
    //Train variables
    int train_length, max_train_length, num_trains, total_train_length, train_length_surplus;
    //Track variables
    int max_track_length, track_length;
    //People Variables
    int occupied_trains, total_capacity, total_num_cars;
    //Others
    int count, num;



    printf("What is the value for N? \n");
    scanf("%d", &num);

    count = 0;

    for (count=0 ; num>count ; count++)
    {
        //printf("Count is at %d of %d. \n"), count, num;

        printf("What is the total length of the track, in feet? \n");
        scanf("%d", &track_length);

        printf("What is the maximum length of a train, in feet? \n");
        scanf("%d", &train_length);

        max_car_length = 0;

        max_train_length = track_length / 4;

        //printf("%d\n", max_train_length);

        total_car_length = 0;

        for(num_cars = 1; total_car_length <= train_length; num_cars++){

            if (num_cars == 1)
            {
                total_car_length = FIRST_CAR_LENGTH;
            }
            else
            {
                total_car_length += NORMAL_CAR_LENGTH;
            }
            //printf("train length at %d cars is %d.\n", num_cars, total_car_length);
        }

        if (total_car_length > train_length)
        {
            num_cars = num_cars - 2;
            total_car_length -= NORMAL_CAR_LENGTH;
        }
        
        //printf("train length at %d cars is %d.\n", num_cars, total_car_length);

        total_train_length = 0;

        for(num_trains = 1; total_train_length <= max_train_length; num_trains++){

            total_train_length += total_car_length;

            //printf("total train length at %d trains is %d.\n", num_trains, total_train_length);
            
        }

        train_length_surplus = 0;

        if (total_train_length > max_train_length)
        {
            if (total_train_length % max_train_length != 0)
            {
                train_length_surplus = total_train_length - max_train_length;
            }
            
            num_trains = num_trains - 2;
            total_train_length -= total_car_length;
        }
        //printf("total train length at %d trains is %d.\n", num_trains, total_train_length);

        
        total_capacity = 0;

        total_num_cars = num_cars * num_trains;

        total_capacity = total_num_cars * CAR_CAPACITY;

        printf("Your ride can have at most %d people on it at one time. \n", total_capacity);

        if (train_length_surplus == 0)
        {
            printf("Maximum Lenght fits exactly. \n");
        }
        else
        {
            printf("Maximum Train Length has surplus of %d feet. \n", train_length_surplus);            
        }
    }
}