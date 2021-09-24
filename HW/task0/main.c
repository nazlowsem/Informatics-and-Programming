/* Task #0 */

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, r1, x2, y2, r2, distance;
    printf("Enter the Coordinates Center and Radius First Circle:\n\n> ");
    scanf ("%f", &x1);
    printf("> ");
    scanf ("%f", &y1);
    printf("> ");
    scanf ("%f", &r1);
    printf("\nEnter the Coordinates Center and Radius Second Circle:\n\n> ");
    scanf ("%f", &x2);
    printf("> ");
    scanf ("%f", &y2);
    printf("> ");
    scanf ("%f", &r2);
    distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    
    if ( distance < (r1 + r2) )
    {
        printf("\nCircles Intersect\n\n");
    }
    else if ( distance > (r1 + r2) )
    {
        printf("\nCircles do not Intersect\n\n");
    }
    else if ( distance < (r1 - r2) )
    {
        printf("\nOne Circle Inside the Other\n\n");
    }
    else if ( r1 - r2 < distance < r1 + r2 )
    {
        printf("\ncircles intersect\n\n");
    }
    return 0;
}

/* Done */
