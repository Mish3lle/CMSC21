#include <stdio.h>

#define NUM_POINTS 9

int main() {
    int road_networks[NUM_POINTS][NUM_POINTS] = {
        {1, 1, 0, 0, 0, 1, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0, 1},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 1}
    };

// Printing the adjacency matrix
    printf("Adjacency Matrix:\n");
    for(int i=0; i<NUM_POINTS; i++) {
        for(int j=0; j<NUM_POINTS; j++) {
            printf("%d ", road_networks[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//the macro NUM_POINTS is used to define the size of the 2D array graph.
