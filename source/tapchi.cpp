#include "tapchi.h"
void TapChi::Xuat()
{
    TaiLieu::Xuat();
    cout << "So Phat Hanh: " << this->SoPhatHanh <<endl;
    cout << "Thang Phat Hanh: " << this->ThangPhatHanh <<endl;
}
void TapChi::Nhap( string *matailieu )
{
    TaiLieu::Nhap( matailieu );
    cout << "Nhap So Phat Hanh" <<endl;
    cin >> this->SoPhatHanh;

    cout << "Nhap So Thang Phat Hanh" <<endl;
    cin >> this->ThangPhatHanh;

    *matailieu = this->MaTailieu = "TapChi";
}