#include <stdio.h>

int main() {
    int age, gender;
    double weight, height, activityFactor, calories;
printf("gender (1 for male, 2 for female) as integer value (1.20 for sedentary, 1.55 for moderately active, 1.725 for very active)");
    printf("enter age");
    scanf("%d", &age);
     printf("enter gender");
    scanf("%d", &gender);
     printf("enter weight");
    scanf("%lf", &weight);
    printf("enter height");
    scanf("%lf", &height);
     printf("enter activity factor");
    scanf("%lf", &activityFactor);

    
    if (gender == 1) { // Male
        calories = (88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age)) * activityFactor;
    } else if (gender == 2) { // Female
        calories = (447.593 + (9.247 * weight) + (3.098 * height) - (4.330 * age)) * activityFactor;
    }

    printf("calories are");
    printf("%.2lf\n", calories);

    return 0;
}