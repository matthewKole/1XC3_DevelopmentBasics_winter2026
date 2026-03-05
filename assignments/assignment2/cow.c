#include "a2.h"

int countCows (int year){
    
    if (year < 4){
        return 1;
    } 

    int cows [year + 1];

    cows[1] = 1;
    cows[2] = 1;
    cows[3] = 1;

    int total = 0;

    for (int ctr = 4; ctr < (year + 1); ctr++){
        cows[ctr] = cows[ctr-1] + cows[ctr-3];
        total = cows[ctr];
    }

    return total;
}