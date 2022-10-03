#include "jollyjumper.h"
#include <stdbool.h>
#include <stdlib.h>



int isJollyJumper(const int seq[], int size) {
    int i;
    int diff;
    bool diffs_found[size];
    int jolly;

    for (i = 0; i < size; i++) {
        diffs_found[i] = false;
    }

    for (i = 1; i <= size; i++) {
        diff = seq[i] - seq[i - 1];
        if (diff < 0) {
            diff = diff * -1;
        }
        if (diffs_found[diff - 1] == true || diff > size) {
            
            jolly = 0;
            return jolly;
        }
        else {
            diffs_found[diff - 1] = true;
        }
            
    }
    
    return 1;
}

