#ifndef _Sach_H
#define _Sach_H

#include "tailieu.h"
class Sach : public TaiLieu
{
private:
    string TenTacGia;
    uint32_t SoTrang;
    /* data */
public:
    void Nhap(string* matailieu);
    void Xuat();
    Sach():TaiLieu(){}
    ~Sach(){}
};

#endif // _Sach_H