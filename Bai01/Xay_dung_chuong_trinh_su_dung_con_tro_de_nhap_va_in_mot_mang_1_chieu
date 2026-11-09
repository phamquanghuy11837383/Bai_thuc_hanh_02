#include <stdio.h> 
#include <stdlib.h>

int main() {
    int n;

    
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    double *a = (double *)malloc(n * sizeof(double));

    if (a == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }

    
    printf("Mang vua nhap:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2lf\t", a[i]);
    }


    free(a);

    return 0;
}
