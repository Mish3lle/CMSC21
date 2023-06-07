#include <stdio.h>

int main() {
    int road_networks[9][9] = {
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
    printAdjacencyMatrix(road_networks);
}

void printAdjacencyMatrix(int road_networks[8][8]) {
    printf("\nAdjacency Matrix:\n");
    printf("\ta\tb\t[c]\t[d]\te\tf\tg\th\ti\n");
    for (int i = 0; i < 9; i++) {
        switch (i) {
            case 0:
                printf("a\t");
                break;
            case 1:
                printf("b\t");
                break;
            case 2:
                printf("[c]\t");
                break;
            case 3:
                printf("[d]\t");
                break;
            case 4:
                printf("e\t");
                break;
            case 5:
                printf("f\t");
                break;
            case 6:
                printf("g\t");
                break;
            case 7:
                printf("h\t");
                break;
            case 8:
                printf("i\t");
                break;
        }
        for (int j = 0; j < 9; j++) {
            printf("%d\t", road_networks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
