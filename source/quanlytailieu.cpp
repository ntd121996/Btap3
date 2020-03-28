#include "quanlytailieu.h"
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