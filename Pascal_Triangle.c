#include <stdio.H>

    int main() {
        int rows, coeff = 1, i, j, space;
        printf("Number of rows:");
        scanf("%d", &rows);
        for(i =0; i < rows; i++) {
        for( space =1; space <= rows -i; space++) {
        printf(" ");
        }
        for(j=0; j <= i; j++) {
        if(j ==0 || i ==0) 
        coeff =1;
        else
        coeff = coeff*(i-j+1)/j;
        printf("%4d",coeff);
        }
        printf("\n");
        }
        return 0;
    }