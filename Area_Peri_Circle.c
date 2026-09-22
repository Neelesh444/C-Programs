#include <stdio.h>

int main() {
    float r;
    printf("Enter radius for the circle:");
    scanf("%f",&r);
    printf("The area of the circle is: %f.\n",3.14*r*r);
    printf("The perimeter of the circle is: %f.\n",2*3.14*r);
    return 0;
}