#include "quanly.h"

void displayScreen()
{
    cout << "1.Nhap Thong Tin Moi"; cout << endl;
    cout << "2.Tim Kiem Theo Loai"; cout << endl;
    cout << "3.Hien Thi Thong Tin Ve Danh Sach"; cout << endl;
    cout << "4.Thoat Chuong Trinh"; cout << endl;
}
void displayChoice()
{
    cout << "1.Nhap Thong Tin Cho Sach"; cout << endl;
    cout << "2.Nhap Thong Tin Cho Tap Chi"; cout << endl;
    cout << "3.Nhap Thong Tin Cho Bao"; cout << endl;
    cout << "4.Thoat Chuong Trinh"; cout << endl;
}
void ClearScreen()
{
    cout << string( 3, '\n');
}
int main ( int argc, char **argv )
{
    string uiSelect;
    uint32_t Value;
    uint32_t Choice;
    QuanLyTaiLieu Quanly;
    bool exit = false;
    string MaTaiLieu;
    do
    {
        displayScreen();
        do
        {
            try
            {
                cin >> uiSelect;
                Value = stoi( uiSelect,nullptr,0 );
            }
            catch( std::exception &e)
            {
                // cout << e.what() << endl;
                // continue;
            }
            if ( Value < 1 || Value > 4 )
            {
                cout << " Vui Long Nhap Lai Gia Tri Tu 1 -> 4 " << endl;
            }
            else
            {
                cout << "Chon So " << Value << endl;
                break;
            }
        }
        while(Value < 1 || Value > 4);

        switch ( Value )
        {
            case 1:
                ClearScreen();
                displayChoice();
                do
                {
                    try
                    {
                        cin >> uiSelect;
                        Choice = stoi( uiSelect,nullptr,0 );
                    }
                    catch( std::exception &e)
                    {
                        // cout << e.what() << endl;
                        // continue;
                    }
                    if ( Choice < 1 || Choice > 4 )
                    {
                        cout << " Vui Long Nhap Lai Gia Tri Tu 1 -> 4 " << endl;
                    }
                    else
                    {
                        break;
                    }
                }
                while ( Choice < 1 || Choice > 4 );
                if( Choice == 1)
                {
                    // Nhap cho Sach
                    Sach *sach = new Sach();
                    Quanly.Nhap( sach);
                }
                if( Choice == 2)
                {
                    // Nhap cho Tap Chi
                    TapChi *tapchi = new TapChi();
                    Quanly.Nhap( tapchi);
                }
                if( Choice == 3)
                {
                    // Nhap cho Bao
                    Bao *bao = new Bao();
                    Quanly.Nhap( bao);
                }
                break;
            case 2:
                cout << "\nChon Tim Kiem: \n";
                cin.get();
                cin >> MaTaiLieu;
                Quanly.Timkiem( MaTaiLieu );
                break;
            case 3:
                
                Quanly.Xuat();
                break;
            case 4:
                exit = true;
                break;
            default:
                break;
        }   
            cin.get();
            cout << "\nEnter to continue ..." << endl;
            cin.get();
            ClearScreen();
            Choice = Value = 0;
    }
    while( exit == false);
    cout << "Exit ...";
    return 0;
}