#ifndef _Bao_H
#define _Bao_H
#include "tailieu.h"
class Bao : public TaiLieu
{
private:
    uint32_t NgayPhatHanh;
public:
    void Nhap(string* matailieu);
    void Xuat();
    Bao():TaiLieu(){}
    ~Bao(){}
};

#endif // _Bao_H