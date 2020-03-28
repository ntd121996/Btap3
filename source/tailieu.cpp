#include "tailieu.h"

void TaiLieu::Xuat()
{
    cout << "\nMa Tai Lieu: " << this->MaTailieu <<endl;
    cout << "Nha Xuat Ban: " << this->NhaXuatBan <<endl;
    cout << "So Luong Phat Hanh: " << this->SoLuongPhatHanh <<endl;
}
void TaiLieu::Nhap(string *matailieu )
{
    cout << "Nhap Ten NXB" << endl;
    cin.get();
    getline( cin,this->NhaXuatBan );
    
    cout << "Nhap So Luong Phat Hanh" <<endl;
    cin >> this->SoLuongPhatHanh;
}
