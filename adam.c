#include <stdio.h>
#include <stdlib.h>

void main(){
    int numberOfTrials;
    char babySteps[100];
    FILE *fadam;

    printf("Enter number of trials: ");
    scanf("%d", &numberOfTrials);

    if((fadam = fopen("/home/BamiSho/Desktop/adamProject/adam.txt", "r")) == NULL){
        printf("Enter, invalid directory");

        exit(1);
    }

    for (int i = 0; i<numberOfTrials ; i++){t
        fscanf(fadam, "%s", &babySteps);
        int countStep = 0;

        for(int j=0; j<100; j++){
            if(babySteps[j] == 'U'){
                countStep++;
            }
            else if(babySteps[j] == 'D'){
                printf("The baby walked %d before falling", countStep);
            }
            else{
                printf("Invalid");
            }
        }
    }
}