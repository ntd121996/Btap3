#include "bao.h"
void Bao::Xuat()
{
    TaiLieu::Xuat();
    cout << "Ngay Phat Hanh: " << this->NgayPhatHanh <<endl;
}
void Bao::Nhap( string *matailieu )
{
    TaiLieu::Nhap( matailieu );
    cout << "Nhap So Ngay Phat Hanh" <<endl;
    cin >> this->NgayPhatHanh;

    *matailieu = this->MaTailieu = "Bao";
}