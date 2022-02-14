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

    int Minutes_Stand, Minutes_Walk, Minutes_Drink, Minutes_Eat;

    printf("How many minutes were you standing today?\n");
    scanf("%d", &Minutes_Stand);

    printf("How many minutes were you walking today?\n");
    scanf("%d", &Minutes_Walk);

    printf("How many minutes were you eating today?\n");
    scanf("%d", &Minutes_Eat);

    printf("How many minutes were you drinking today?\n");
    scanf("%d", &Minutes_Drink);

    int Calories_Burned = (Minutes_Stand * STAND_CAL) + (Minutes_Walk * WALK_CAL);
    int Calories_Gained = (Minutes_Drink * DRINK_CAL) + (Minutes_Eat * FOOD_CAL);

    int Calories_Total = Calories_Burned - Calories_Gained;
    int Pounds_Total = Calories_Total / CALS_PER_POUND;

    If (Calories_Total0) {
        printf("You lost %d pounds today!", Pounds_Total);
    }
    Else {
        printf("Weight lost is -%d pounds.", Pounds_Total);
    }
}