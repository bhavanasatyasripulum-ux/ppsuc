#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    
    int edges[][2] = {
        {1, 2}, {2, 3}, {3, 4}, {4, 5},
        {5, 6}, {6, 7}, {7, 8}, {8, 9},
        {9, 10}, {1, 10}
    };
    int n = 11; 

    int found = 0;
    for (int i = 0; i < n; i++) {
        if ((edges[i][0] == a && edges[i][1] == b) ||
            (edges[i][0] == b && edges[i][1] == a)) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Yes
");
    else
        printf("No
");

    return 0;
}

