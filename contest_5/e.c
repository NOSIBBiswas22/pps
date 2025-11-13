#include <stdio.h>
#include <string.h>

int main() {
    int freq[26];
    for (int i = 0; i < 26; i++)
        scanf("%d", &freq[i]);

    char grid[5][5];
    int groups[6][4][2] = {
        {{0,0},{0,4},{4,4},{4,0}},   // corners
        {{0,1},{1,4},{4,3},{3,0}},   // edge 1
        {{0,2},{2,4},{4,2},{2,0}},   // edge 2
        {{1,1},{1,3},{3,3},{3,1}},   // inner 4
        {{1,2},{2,3},{3,2},{2,1}},   // inner 4 (cross)
        {{2,2},{0,0},{0,0},{0,0}}    // center placeholder
    };

    int used[26] = {0};
    int group = 0;

    // Fill 4-cell groups (first 5 groups)
    for (group = 0; group < 5; group++) {
        int found = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] >= 4) {
                // assign letter i to this group
                for (int j = 0; j < 4; j++)
                    grid[groups[group][j][0]][groups[group][j][1]] = 'a' + i;
                freq[i] -= 4;
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("no\n");
            return 0;
        }
    }

    // Fill center
    int center_filled = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] >= 1) {
            grid[2][2] = 'a' + i;
            freq[i]--;
            center_filled = 1;
            break;
        }
    }
    if (!center_filled) {
        printf("no\n");
        return 0;
    }

    // Fill remaining empty cells (if any)
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            if (grid[r][c] == 0) {
                for (int i = 0; i < 26; i++) {
                    if (freq[i] > 0) {
                        grid[r][c] = 'a' + i;
                        freq[i]--;
                        break;
                    }
                }
            }
        }
    }

    printf("yes\n");
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++)
            printf("%c", grid[r][c]);
        printf("\n");
    }

    return 0;
}
