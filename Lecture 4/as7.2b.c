#include <stdio.h>

int main() {
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
    int charging_stations[] = {2, 3};
    int num_stations = 2;
    print_matrix(road_networks, 8, charging_stations, num_stations);
}

void print_matrix(int road_networks[][8], int size, int charging_stations[], int num_stations) {
    printf(" a   b   c   d   e   f   g   h\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int is_charging_station = 0;
            for (int k = 0; k < num_stations; k++) {
                if (i == charging_stations[k] || j == charging_stations[k]) {
                    is_charging_station = 1;
                    break;
                }
            }
            if (is_charging_station) {
                printf("[%d] ", road_networks[i][j]);
            } else {
                printf(" %d  ", road_networks[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
