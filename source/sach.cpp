#include "sach.h"
void Sach::Xuat()
{
    TaiLieu::Xuat();
    cout << "Ten Tac Gia: " << this->TenTacGia <<endl;
    cout << "So Trang: " << this->SoTrang <<endl;
}
void Sach::Nhap( string *matailieu )
{
    TaiLieu::Nhap( matailieu );
    cout << "Nhap Ten Tac Gia" << endl;
    cin.get();
    getline( cin,this->TenTacGia );
    
    cout << "Nhap So Trang" <<endl;
    cin >> this->SoTrang;

    *matailieu = this->MaTailieu = "Sach";
}