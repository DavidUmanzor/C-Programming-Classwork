#include <stdio.h>

int main(void){
    //walking = -5 cal/min
    //standing = -2 cal/main
    //consuming food = 40 cal/min
    //consuming drink = 20 cal/min

    int WALK_CAL = 5;
    int STAND_CAL = 2;
    int DRINK_CAL = 20;
    int FOOD_CAL = 40;
    int CALS_PER_POUND = 3500;

    int Minutes_Walk, Minutes_Stand, Minutes_Drink, Minutes_Eat;

    printf("How many minutes were you walking today?\n");
    scanf("%d", &Minutes_Walk);

    printf("How many minutes were you standing today?\n");
    scanf("%d", &Minutes_Stand);

    printf("How many minutes were you drinking today?\n");
    scanf("%d", &Minutes_Drink);

    printf("How many minutes were you eating today?\n");
    scanf("%d", &Minutes_Eat);

    int Calories_Burned = (Minutes_Stand * STAND_CAL) + (Minutes_Walk * WALK_CAL);
    int Calories_Gained = (Minutes_Drink * DRINK_CAL) + (Minutes_Eat * FOOD_CAL);


    //Comments here were to help check for calculation errors

    //printf("Calories from Standing (%d)\n", Minutes_Stand * STAND_CAL);
    //printf("Calories from Walking (%d)\n", Minutes_Walk * WALK_CAL);

    //printf("Total Calories Burned (%d)\n", Calories_Burned);

    //printf("Calories from Drinking (%d)\n", Minutes_Drink * DRINK_CAL);
    //printf("Calories from Eating (%d)\n", Minutes_Eat * FOOD_CAL);

    //printf("Total Calories Gained (%d)\n", Calories_Gained);

    int Calories_Total = 0;

    Calories_Total = Calories_Burned - Calories_Gained;

    //printf("%d\n", Calories_Total);

    double Pounds_Total = 0;

    Pounds_Total = (double)Calories_Total / (double)CALS_PER_POUND;


    //printf("%d\n", Pounds_Total);     

    if (Calories_Total >= 0) {
        printf("You lost %.3lf pounds today!", Pounds_Total);
    }
    else {
        printf("Weight lost is %.3lf pounds.", Pounds_Total);
    }
}
