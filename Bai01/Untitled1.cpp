#include <stdio.h>
#include <stdlib.h>

int main() {
    int h, c;
    printf("Nhap so hang va so cot: ");
    scanf("%d%d", &h, &c);
    
    double**ma=(double **)malloc(h * sizeof(double *));
    if (ma == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    for (int i = 0; i < h; i++) {
        ma[i] = (double *)malloc(c * sizeof(double));
        if (ma[i] == NULL) {
            printf("Khong du bo nho tai dong %d!\n", i);
            return 1;
        }
    }
    
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%lf", &ma[i][j]);
        }
    }

    
    printf("Ma tran %dx%d vua tao:\n", h, c);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < c; j++) {
            printf("%.2lf\t", ma[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < h; i++) {
        free(ma[i]);
    }
    free(ma);

    return 0;
}

