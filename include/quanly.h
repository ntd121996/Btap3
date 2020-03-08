#ifndef H_Quan_Ly_TL_H
#define H_Quan_Ly_TL_H
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class TaiLieu
{
protected:
    string MaTailieu;
    string NhaXuatBan;
    uint   SoLuongPhatHanh;

public:
    virtual void Xuat();
    TaiLieu(/* args */);
    ~TaiLieu();
};

class Sach : public TaiLieu
{
private:
    string TenTacGia;
    uint SoTrang;
    /* data */
public:
    void Xuat();
    Sach(/* args */);
    ~Sach();
};

class TapChi : public TaiLieu
{
private:
    uint SoPhatHanh;
    uint ThangPhatHanh;
public:
    void Xuat();
    TapChi(/* args */);
    ~TapChi();
};
class Bao : public TaiLieu
{
private:
    uint NgayPhatHanh;
public:
    void Xuat();
    Bao(/* args */);
    ~Bao();
};

class QuanLyTaiLieu
{
private:
    /* data */
    map < string, TaiLieu > MapTaiLieu;
public:
    void Nhap( string MaTaiLieu, TaiLieu *tailieu );
    void Timkiem( string MaTaiLieu );
    void Xuat();
    QuanLyTaiLieu(/* args */);
    ~QuanLyTaiLieu();
};













#endif