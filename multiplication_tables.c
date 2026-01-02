// 5. Display first mathematical tables, each table up to 10 rows? 
//Generalise this to display first n (> 0) 
//mathematical tables up to m (m > 0) rows?

// Developed by Amaan Khan (BCA FY)

#include <stdio.h>

int main() {
    int n, m, i, j;

    printf("Enter number of tables (n): ");
    scanf("%d", &n);

    printf("Enter number of rows (m): ");
    scanf("%d", &m);

    for (i = 1; i <= n; i++) {
        printf("\nTable of %d\n", i);

        for (j = 1; j <= m; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}

