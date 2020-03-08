#include "quanly.h"

TaiLieu::TaiLieu(/* args */)
{

}
TaiLieu::~TaiLieu()
{
}
void TaiLieu::Xuat()
{

}
Sach::Sach(/* args */)
{
}

Sach::~Sach()
{
}
void Sach::Xuat()
{

}
TapChi::TapChi(/* args */)
{
}

TapChi::~TapChi()
{
}
void TapChi::Xuat()
{

}
Bao::Bao(/* args */)
{
}

Bao::~Bao()
{
}
void Bao::Xuat()
{

}
QuanLyTaiLieu::QuanLyTaiLieu(/* args */)
{
}

QuanLyTaiLieu::~QuanLyTaiLieu()
{
}
void QuanLyTaiLieu::Xuat()
{

}
void QuanLyTaiLieu::Nhap( string MaTaiLieu, TaiLieu *tailieu )
{
    this->MapTaiLieu.insert( pair<string,TaiLieu>( MaTaiLieu,*tailieu ));
}
void QuanLyTaiLieu::Timkiem( string MaTaiLieu )
{

}