#include <stdio.h>

int main() {
    int outerCount = 1;
    
    while (outerCount <= 5) {
        int innerCount = 1;
        
        printf("Outer loop iteration: %d\n", outerCount);
        
        while (innerCount <= 3) {
            printf("Inner loop iteration: %d\n", innerCount);
            
            if (outerCount == 3 && innerCount == 2) {
                printf("Skipping this iteration...\n");
                innerCount++;
                continue;
            }
            
            if (outerCount == 4) {
                printf("Breaking out of inner loop...\n");
                break;
            }
            
            innerCount++;
        }
        
        outerCount++;
        printf("\n");
    }
    
    return 0;
}
