#ifndef _Tai_Lieu_H
#define _Tai_Lieu_H
#include <iostream>
#include <string.h>
#include <map>
#include <stdint.h>
using namespace std;
class TaiLieu
{ 
protected:
    string MaTailieu;
    string NhaXuatBan;
    uint32_t   SoLuongPhatHanh;

public:
    virtual void Nhap(string* matailieu);
    virtual void Xuat();
    TaiLieu(){}
    virtual ~TaiLieu(){}
};

#endif // _Tai_Lieu_H