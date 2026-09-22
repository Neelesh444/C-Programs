#include <stdio.h>

int main() {
    float cp,es,ec,ma,ftmp,sum;
    printf("Enter Computer programming marks:");
    scanf("%f",&cp);
    printf("Enter English Communication marks:");
    scanf("%f",&ec);
    printf("Enter Environment Science marks:");
    scanf("%f",&es);
    printf("Enter Mathematics marks:");
    scanf("%f",&ma);
    printf("Enter Textile Engineering marks:");
    scanf("%f",&ftmp);
    printf("The Total Percentage of all courses is: %f.",((es+ec+ma+cp+ftmp)/500*100))69;
    return 0;

}