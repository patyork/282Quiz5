#include "mat22.h"
#include "vec2.h"
#include <iostream>

//constructor
mat22::mat22()
{
    for( int i=0; i<2; i++)
    {
        for( int j=0; j<2; j++ )
        {
            data[i][j] = 0.0f;
        }
    }
}
    
//parameterized constructor
mat22::mat22(float a1, float a2, float b1, float b2)
{
    data[0][0] = a1;
    data[0][1] = a2;
    
    data[1][0] = b1;
    data[1][1] = b2;
}

//transpose
void mat22::transpose()
{
    float temp = data[0][1];
    
    data[0][1] = data[1][0];
    data[1][0] = temp;
}

//print matrix
void mat22::printAll()
{
    using namespace std;
    
    //loop over rows
    for( int i=0; i<2; i++)
    {
        //loop over columns
        for( int j=0; j<2; j++ )
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}

//Overloaded function call operator
float& mat22::operator()(int i, int j)
{
    return data[i][j];
}

//Overloaded * operator (mat22 * mat22)
mat22 operator*( mat22& left, mat22& right)
{
    mat22 output;
    
    output(0,0) = left(0,0)*right(0,0) + left(0,1)*right(1,0);
    output(0,1) = left(0,0)*right(0,1) + left(0,1)*right(1,1);
    output(1,0) = left(1,0)*right(0,0) + left(1,1)*right(1,0);
    output(1,1) = left(1,0)*right(0,1) + left(1,1)*right(1,1);
    
    return output;
}

vec2 operator*( mat22& left, vec2& right)
{
    vec2 output;
    
    output.x = left(0,0)*right.x + left(0,1)*right.y;
    output.y = left(1,0)*right.x + left(1,1)*right.y;
    
    return output;
}


