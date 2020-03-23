#include "quanly.h"

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

void QuanLyTaiLieu::Xuat()
{
    map<string, TaiLieu*>::iterator it;
    for( it = this->MapTaiLieu.begin(); it != this->MapTaiLieu.end(); it++ )
    it->second->Xuat();
}
void QuanLyTaiLieu::Nhap( TaiLieu *tailieu )
{
    string MaTaiLieu;
    tailieu->Nhap(&MaTaiLieu);
    this->MapTaiLieu.insert( pair<string,TaiLieu *>( MaTaiLieu,tailieu ));
}
void QuanLyTaiLieu::Timkiem( string MaTaiLieu )
{
    map<string, TaiLieu*>::iterator it;
    it = this->MapTaiLieu.find(MaTaiLieu);
    for( it = this->MapTaiLieu.find(MaTaiLieu); it != this->MapTaiLieu.end(); it++)
    {
        if( it != this->MapTaiLieu.end() && it->first == MaTaiLieu)
        {
            it->second->Xuat();
        }
        else
        {
            cout << "invalid";
        }
    }
}