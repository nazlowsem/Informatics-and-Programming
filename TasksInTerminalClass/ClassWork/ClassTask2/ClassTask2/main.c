/* Task In Class #2 */

#include <stdio.h>
#include <math.h>

int main() {
    int p, s = 0;
    
    printf("Price for the Witcher Service:\n> ");
    scanf("%d", &p);
    
    while (p > 0)
    {
        if ((p - 25) >= 0) {
            p = p - 25;
            s = s + 1;
        }
        else if ((p - 10 >= 0) & (p - 25 < 0)) {
            p = p - 10;
            s = s + 1;
        }
        else if ((p - 5 >= 0) & (p - 10 < 0) & (p - 25 < 0)) {
            p = p - 5;
            s = s + 1;
        }
        else if ((p - 1 >= 0) & (p - 5 < 0) & (p - 10 < 0) & (p - 25 < 0)) {
            p = p - 1;
            s = s + 1;
        }
    }
    
    printf("You will Pay %d Coin\n\n", s);
        
    return 0;
}

/* Done */
