#include <stdio.h>

int main() {
    int n, i, j;
    
    // Read size of matrix
    scanf("%d", &n); 
    int matrix[n][n];
    // Read matrix elements
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    } 
    int isIdentity = 1;  // Assume it is an identity matrix  
    // Check identity matrix condition
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                if(matrix[i][j] != 1) {
                    isIdentity = 0;
                }
            } else {
                if(matrix[i][j] != 0) {
                    isIdentity = 0;
                }
            }
        }
    }  
    // Print result
    if(isIdentity == 1) {
        printf("Identity Matrix");
    } else {
        printf("Not an Identity Matrix");
    }  
    return 0;
}
