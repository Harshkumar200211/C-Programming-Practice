/* Program 103: Dynamic Memory Using malloc calloc and free
 * Topic: dynamic memory allocation
 * Beginner-friendly example; compile with a C11 compiler.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *values;
    printf("How many integers (1 to 50)? ");
    scanf("%d", &n);
    if (n < 1 || n > 50) { printf("Invalid size\n"); return 0; }
    values = (int *)malloc((size_t)n * sizeof(int));
    if (values == NULL) { printf("Memory allocation failed\n"); return 0; }
    for (i = 0; i < n; i++) scanf("%d", &values[i]);
    printf("Values from malloc: ");
    for (i = 0; i < n; i++) printf("%d ", values[i]);
    printf("\n");
    free(values);
    values = (int *)calloc((size_t)n, sizeof(int));
    if (values == NULL) { printf("Memory allocation failed\n"); return 0; }
    printf("Initial calloc values: ");
    for (i = 0; i < n; i++) printf("%d ", values[i]);
    printf("\n");
    free(values);
    return 0;
}
