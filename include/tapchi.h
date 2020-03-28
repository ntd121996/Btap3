#ifndef _Tap_Chi_H
#define _Tap_Chi_H
#include "tailieu.h"

class TapChi : public TaiLieu
{
private:
    uint32_t SoPhatHanh;
    uint32_t ThangPhatHanh;
public:
    void Nhap(string* matailieu);
    void Xuat();
    TapChi():TaiLieu(){}
    ~TapChi(){}
};

#endif // _Tap_Chi_H