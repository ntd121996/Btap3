#ifndef H_Quan_Ly_TL_H
#define H_Quan_Ly_TL_H
#include <iostream>
#include <string>
#include <string.h>
#include <map>
#include <vector>
#include <stdint.h>

using namespace std;

class TaiLieu
{
public:
    string MaTailieu;
protected:
    string NhaXuatBan;
    uint32_t   SoLuongPhatHanh;

public:
    virtual void Nhap();
    virtual void Xuat();
    TaiLieu(){}
    virtual ~TaiLieu(){}
};

class Sach : public TaiLieu
{
private:
    string TenTacGia;
    uint32_t SoTrang;
    /* data */
public:
    void Nhap();
    void Xuat();
    Sach():TaiLieu(){}
    ~Sach(){}
};

class TapChi : public TaiLieu
{
private:
    uint32_t SoPhatHanh;
    uint32_t ThangPhatHanh;
public:
    void Nhap();
    void Xuat();
    TapChi():TaiLieu(){}
    ~TapChi(){}
};
class Bao : public TaiLieu
{
private:
    uint32_t NgayPhatHanh;
public:
    void Nhap();
    void Xuat();
    Bao():TaiLieu(){}
    ~Bao(){}
};

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













#endif