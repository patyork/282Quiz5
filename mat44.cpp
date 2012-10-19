#include "mat44.h"

mat44::mat44()
{
    for( int i=0; i<4; i++)
    {
        for( int j=0; j<4; j++ )
        {
            data[i][j] = 0.0f;
        }
    }
    
}

mat44::mat44(float a1, float a2, float a3, float a4, float b1, float b2, float b3, float b4,
              float c1, float c2, float c3, float c4, float d1, float d2, float d3, float d4)
{
    data[0][0]= a1;
    data[0][1] = a2;
    data[0][2] = a3;
    data[0][3] = a4;
    
    data[1][0] = b1;
    data[1][1] = b2;
    data[1][2] = b3;
    data[1][3] = b4;
    
    data[2][0] = c1;
    data[2][1] = c2;
    data[2][2] = c3;
    data[2][3] = c4;
    
    data[3][0] = d1;
    data[3][1] = d2;
    data[3][2] = d3;
    data[3][3] = d4;
}
            
void mat44::transpose()
{
    
}

