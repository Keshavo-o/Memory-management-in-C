#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }
    printf("Elements entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    printf("The pointer is freed");

}
