/*
    Examinationsuppgift C - Fullstack .NET
    Ludwig Hjärne
    2026-02-28
*/

#include <stdio.h>
#include <string.h>

int main(){
    char name[10];
    char best_sum_name[10];
    char below_average_names[5][10];
    int points[13];
    int points_average = 5; // points 0-10
    int sum = 0;
    int best_sum = 0;
    int count = 0;

    for (int i = 0; i < 5; i++){
        sum = 0;
        scanf("%s", name);

        for (int i = 0; i < 13; i++){
            scanf("%d", &points[i]); 
            sum += points[i];
        }
        
        // If first letter is lowercase, make it uppercase.
        if (name[0] > 90){ 
            name[0] = name[0] - 32;
        }

        // Compares and saves the name that has highest average points
        if (sum/13.0 > best_sum/13.0){
            best_sum = sum;
            strcpy(best_sum_name, name);
        }

        // Saves the names that have below average points
        if (sum/13.0 <= points_average){
            strcpy(below_average_names[count], name);
            count++;
        }
    }

    printf("%s\n", best_sum_name);

    for (int i = 0; i < count; i++){
        printf("%s\n", below_average_names[i]);
    }

    return 0;
}
