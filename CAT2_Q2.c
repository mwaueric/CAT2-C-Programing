// An array data structure us  linear data structure that collects elements of the same data type and stores them in contiguous and adjacent memory location
#include <stdio.h>

int main() {
    int scores[2][2] = {{65, 92}, {84, 72}};
    int scores2[2][2] = {{35, 70}, {59, 67}};
    
    printf("2D Array scores1:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }
    
    printf("\n2D Array scores2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
