//
//  main.c
//  Dice for Rami
//
//  Created by 鷹橋尚紀 on 19/11/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int faces, throws, dice;
    int flag = 0;
    int count[25];
    srand(time(0));
    for (int i=0; i<25; i++){
        count[i]=0; //data format
    }
//loop1:
    while(flag == 0){
    printf("please specify the number of faces for your dice:\n");
    scanf("%d", &faces);
    while(1){
    if (1 < faces && 25 > faces) {
        printf("Please specify the number of throws for your dice:\n");
        scanf("%d", &throws);
        flag = 1;
        if (1 < throws &&  500 > throws) {
                printf("throwing dice!\n");
            
            for (int i = 0; i < throws; i++){
                dice = (rand() % faces) + 1;
                printf("Dice = %d\n", dice);
                count[dice]++;
                    }
            break;
            }
        
        else{
                printf("Invalid Input! Please try again!\n");
                //goto loop2;
                
        }
    }
    else{
        printf("Invalid Input! Please try again!\n");
        //goto loop1;
    }
    
    }
    }
    for(int i=1; i<=faces; i=i+1){
        printf("Occurrences of %d: %f%%\n", i,((float)count[i])/((float)faces)*100);
    }
    return 0;
    }
    
