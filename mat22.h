#include "vec2.h"

class mat22
{
private:
    float data[2][2];
    
public:
    //constructor
    mat22();
    
    //parameterized constructor
    mat22(float a1, float a2, float b1, float b2);
    
    //transpose
    void transpose();
    
    //print matrix
    void printAll();
    
    //Overloaded function call operator
    float& operator()(int i, int j);
    
    //Friend non-member overloads
    friend mat22 operator*( mat22& left, mat22& right);
    friend vec2 operator*( mat22& left, vec2& right);
};