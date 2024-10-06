#include <stdio.h>

void football_score_combinations(int score){
    int touchdown, fieldgoal, safety, td_plus2, td_plus1;

    for(touchdown = 0; touchdown * 6 <= score; touchdown++){
        for(fieldgoal = 0; fieldgoal * 3 <= score; fieldgoal ++){
            for(safety = 0; safety * 2 <= score; safety ++){
                for (td_plus2 = 0; td_plus2 * 8 <= score; td_plus2 ++){
                    for(td_plus1 = 0; td_plus1 * 7 <= score; td_plus1++){
                        if  (touchdown * 6 + fieldgoal * 3 + safety * 2 + td_plus2 * 8 + td_plus1 * 7 == score){
                            printf("%d TD, %d TD + 2pt, %d TD + FG, %d 3pt FG, %d Safety\n", touchdown, td_plus2, td_plus1, fieldgoal, safety);
                        }
                    }
                }
            }
        }
    }
}

int main(){
    int score;
    
    while (1){
        printf("Enter a target NFL score: ");
        scanf("%d", &score);

        if(score <= 1){
            printf("Not a valid score.");
            break;
        }
        printf("Possible combinations:\n ");
        football_score_combinations(score);

    }
    return 0;
}