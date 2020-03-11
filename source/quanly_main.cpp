#include "quanly.h"

int count = 1;
bool first = true;
int n = 9;
char Array[9];
int Check[9] ={ 1,1,1,1,1,1,1,1,1};
int value;
bool CheckValid( int i, int k)
{
    if( k == 8 )
    {
        if( first )
        {
            first = false;
            return false;
        }
    }
    if (count == 20) return false;
    return true;
}
void printfSolution()
{
    cout << "So thu " << count++ << ":";
    value = atoi( Array );
    cout << value << endl;

}
void Try( int k )
{
    int i;
    for( i = 0x30; i <= 0x39; i++ )
    {
        if( CheckValid( i , k ))
        {
            Array[ k ] = i;
            
            if (k  == n - 1)
            {
                printfSolution();
            }
            else
            {
                Try ( k + 1 );
            }
            
        }
    }

}

int main ( int argc, char** argv )
{

    Try( 0 );

    return 0;
}