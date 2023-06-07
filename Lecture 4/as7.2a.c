#include <stdio.h>

int main()
{
// The graph is represented using an adjacency matrix
    int road_networks[8][8] = {
        {1, 1, 0, 0, 0, 1, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 1}
    };

// Print the adjacency matrix
    printAdjacencyMatrix(road_networks);

// Print the charging stations
    printf("\nCharging Stations: [c], [d]\n");
}

void printAdjacencyMatrix(int road_networks[][8])
{
    int i, j;
    printf("\nAdjacency Matrix:\n");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%d ", road_networks[i][j]);
        }
        printf("\n");
    }
    return 0;
}

