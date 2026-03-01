/*
    Examinationsuppgift C - Fullstack .NET
    Ludwig Hjärne
    2026-02-28
*/

#include <stdio.h>
#include <string.h>

int main(){
    const int num_students = 5;
    const int num_points = 13;
    const int len_name = 10;
    
    char name[len_name];
    char names[num_students][len_name];
    char best_avg_name[len_name];
    int points[num_points];
    int sums[num_students];
    int count = 0;
    double sum = 0.0;
    double best_avg = 0.0;
    double total_sums = 0.0;
    double current_avg = 0.0;

    for (int i = 0; i < num_students; i++){
        sum = 0;
        scanf("%s", name);

        for (int i = 0; i < num_points; i++){
            scanf("%d", &points[i]); 
            sum += points[i];
        }
        
        // If first letter is lowercase, make it uppercase.
        if (name[0] > (int)'Z'){ 
            name[0] = name[0] - 32;
        }

        // Compares and saves the name that has highest average points
        if (sum/num_points > best_avg/num_points){
            best_avg = sum;
            strcpy(best_avg_name, name);
        }

        total_sums += sum;
        sums[i] = sum;
        strcpy(names[i], name);

    }

    // Print name with best average score
    printf("%s\n", best_avg_name);

    double avg = ((double)total_sums / num_students) / num_points;

    // If score is below average: print name
    for (int i = 0; i < num_students; i++) {
        current_avg = (double)sums[i] / num_points;

        if (current_avg < avg){
            printf("%s\n", names[i]);
        }
    }

    return 0;
}
