#include <stdio.h>
#include <stdbool.h>

#define INT_MAX 2147483647

int minDistance(int dist_from_src[], bool visited_nodes[]) {
    int min_dist = INT_MAX, min_index;
    for (int i = 0; i < 9; i++) {
        if (visited_nodes[i] == false && dist_from_src[i] <= min_dist) {
            min_dist = dist_from_src[i], min_index = i;
        }
    }
    return min_index;
}

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

    int src;
    printf("Which point are you located? (0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H, 8 - I): ");
    do {
        scanf("%d", &src);
        if (src < 0 || src > 8) {
            printf("Invalid input. Try again: ");
        }
    } while (src < 0 || src > 8); printf("\n");

    int dist_from_src[9];
    bool visited_nodes[9];

    for (int i = 0; i < 9; i++) {
        dist_from_src[i] = INT_MAX, visited_nodes[i] = false;
    }
    dist_from_src[src] = 0;

    for (int count = 0; count < 9 - 1; count++) {
        int current_node = minDistance(dist_from_src, visited_nodes);
        visited_nodes[current_node] = true;
        for (int adjacent_node = 0; adjacent_node < 9; adjacent_node++) {
            if (!visited_nodes[adjacent_node]
                && road_networks[current_node][adjacent_node]
                && dist_from_src[current_node] != INT_MAX
                && dist_from_src[current_node] + road_networks[current_node][adjacent_node] < dist_from_src[adjacent_node]) {
                    dist_from_src[adjacent_node] = dist_from_src[current_node] + road_networks[current_node][adjacent_node];
            }
        }
    }

    if (src == 2 || src == 3) {
        printf("Point %c is already a charging station\n", 65 + src);
    }
    else if (dist_from_src[2] == INT_MAX && dist_from_src[3] == INT_MAX) {
        printf("You are currently at Point %c.\n", 65 + src);
        printf("There are no near charging stations at this point.\n");
    }
    else {
        printf("You are currently at Point %c.\n", 65 + src);
        printf("The nearest charging station to Point %c is Point %c.\n", 65 + src, 67 + (dist_from_src[2] > dist_from_src[3]));
    }

    return 0;
}
