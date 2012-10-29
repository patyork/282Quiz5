#include "mat44.h"
#include <iostream>

using namespace simphys;

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
            
//transpose
void mat44::transpose()
{
    float temp[4][4];
    
    //transpose into temp
    for( int i=0; i<4; i++ )
    {
        for( int j=0; j<4; j++ )
        {
            temp[i][j] = data[j][i];
        }
    }
    
    //copy from temp into transpose
    for( int i=0; i<4; i++ )
    {
        for( int j=0; j<4; j++ )
        {
            data[i][j] = temp[i][j];
        }
    }
}

//print matrix
void mat44::printAll()
{
    using namespace std;
    
    //loop over rows
    for( int i=0; i<4; i++)
    {
        //loop over columns
        for( int j=0; j<4; j++ )
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}

//Overloaded function call operator
float& mat44::operator()(int i, int j)
{
    return data[i][j];
}

//Overloaded * operator (mat22 * mat22)
mat44 simphys::operator*( mat44& left, mat44& right)
{

    mat44 output;
    
    for( int i=0; i < 4; i++ )
    {
        for( int j=0; j<4; j++ )
        {
            for( int k=0; k<4; k++ )
            {
                output(i,j) +=  left(i,k)*right(k,j);
            }
        }
    }
    
    return output;
}

vec4 simphys::operator*( mat44& left, vec4& right)
{
    using namespace std;
    vec4 output;
    
    for( int i=0; i<4; i++ )
    {
        for( int j=0; j<4; j++ )
        {
            switch(i)
            {
                case 0:
                    output.x = ( output.x + left(i,j)*right.x );
                    j++;
                    output.x = ( output.x + left(i,j)*right.y );
                    j++;
                    output.x = ( output.x + left(i,j)*right.z );
                    j++;
                    output.x = ( output.x + left(i,j)*right.t );
                    j++;
                    break;
                case 1:
                    output.y =( output.y + left(i,j)*right.x );
                    j++;
                    output.y =( output.y + left(i,j)*right.y );
                    j++;
                    output.y =( output.y + left(i,j)*right.z );
                    j++;
                    output.y =( output.y + left(i,j)*right.t );
                    j++;
                    break;
                case 2:
                    output.z = ( output.z + left(i,j)*right.x );
                    j++;
                    output.z = ( output.z + left(i,j)*right.y );
                    j++;
                    output.z = ( output.z + left(i,j)*right.z );
                    j++;
                    output.z = ( output.z + left(i,j)*right.t );
                    j++;
                    break;
                case 3:
                    output.t = ( output.t + left(i,j)*right.x );
                    j++;
                    output.t = ( output.t + left(i,j)*right.y );
                    j++;
                    output.t = ( output.t + left(i,j)*right.z );
                    j++;
                    output.t = ( output.t + left(i,j)*right.t );
                    j++;
                    break;
                default:
                    break;
            }
        }
    }
    
    return output;
}



