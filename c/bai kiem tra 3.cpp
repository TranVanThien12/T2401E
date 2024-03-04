#include <stdio.h>

float tinhTienDien(int soKWh) {
    float tongTien = 0;
    
    if (soKWh <= 50) {
        tongTien = soKWh * 500;
    } else if (soKWh <= 100) {
        tongTien = 50 * 500 + (soKWh - 50) * 700;
    } else {
        tongTien = 50 * 500 + 50 * 700 + (soKWh - 100) * 900;
    }
    
    return tongTien;
}

int main() {
    int soKWh;
    printf("Nhap so kWh su dung: ");
    scanf("%d", &soKWh);
    
    float tongTien = tinhTienDien(soKWh);
    printf("Tong tien dien phai tra: %.2f dong\n", tongTien);
    
    return 0;
}
