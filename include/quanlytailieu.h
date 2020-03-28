#ifndef H_Quan_Ly_TL_H
#define H_Quan_Ly_TL_H

#include "tailieu.h"
class QuanLyTaiLieu
{
private:
    /* data */
    multimap < string, TaiLieu* > MapTaiLieu;
public:
    void Nhap( TaiLieu *tailieu );
    void Timkiem( string MaTaiLieu );
    void Xuat();
    QuanLyTaiLieu(/* args */){}
    ~QuanLyTaiLieu(){}
};

#endif // H_Quan_Ly_TL_H