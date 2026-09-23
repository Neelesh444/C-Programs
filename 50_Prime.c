#include <stdio.h>

    int main() {
    int count =0, num =2, i, Prime;
    printf("THE FIRST 50 PRIME NUMBERS:\n");
    while(count<50) {
        Prime=1;
        for(i =2; i*i <= num; i++ ) {
        if( num%i ==0) {
        Prime =0 ;
        break;
       }
      }
        if(Prime) {
        printf("%d\n", num);
        count++;
       }
        num++;
    }
        return 0;
    }
