#include <stdio.h>

int main() {
    int temp[4][4] = {
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };

    printf("Cold Spots:\n");

    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            int isCold = 1; // assume current spot is cold

            // Check North
            if(i-1 >= 0 && temp[i][j] >= temp[i-1][j]) {
                isCold = 0;
            }
            // Check South
            if(i+1 < 4 && temp[i][j] >= temp[i+1][j]) {
                isCold = 0;
            }
            // Check West
            if(j-1 >= 0 && temp[i][j] >= temp[i][j-1]) {
                isCold = 0;
            }
            // Check East
            if(j+1 < 4 && temp[i][j] >= temp[i][j+1]) {
                isCold = 0;
            }

            if(isCold) {
                printf("Position (%d,%d)  Temperature: %d\n", i+1, j+1, temp[i][j]);
            }
        }
    }

    return 0;
}
