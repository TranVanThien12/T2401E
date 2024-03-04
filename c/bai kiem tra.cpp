#include <stdio.h>

int main() {
    int n;

    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    
    int arr[n];

    
    printf("Nhap cac gia tri cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min_positive = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            if (min_positive == -1 || arr[i] < min_positive) {
                min_positive = arr[i];
            }
        }
    }

    
    if (min_positive != -1) {
        printf("So duong nho nhat trong mang là: %d\n", min_positive);
    } else {
        printf("Khong có so duong trong mang.\n");
    }

    return 0;
}
