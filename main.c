/*
    Examinationsuppgift C
    Ludwig Hjärne
    2026-02-27
*/

#include <stdio.h>

int main(){
    char name[10];
    int points[13];
    int mean_value = 5;

    for (int a = 0; a < 5; a++){
        int sum = 0;

        scanf("%s", name);

        for (int i = 0; i < 13; i++){
            scanf("%d", &points[i]); // <-- lita på mig det ska vara ett '&'-tecken där
            sum = sum + points[i];
        }

        // printf("Sum: %d\n", sum);
        
        // If first letter is lowercase, make it uppercase.
        if (name[0] > 90){ 
            name[0] = name[0] - 32;
        }

        if (sum/13 <= mean_value){
            printf("\n%s\n", name);
        }

        /*  Print Name and points in a line

            printf("%s", name);

            for (int j = 0; j < 13; j++){
                printf(" %d", points[j]);
            }

            printf("\n");
        */
    }
    
    return 0;
}
