#include <iostream>
#include "mat22.h"
#include "mat33.h"
#include "mat44.h"
#include "vec2.h"
#include "vec3.h"
using namespace std;

int main()
{
     mat44 m1(1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f,
               8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f);
     
     /*m1.printAll();
     cout << endl;
     
     m1.transpose();
     mat44 m2 = m1;
     
     m1.printAll();
     cout << endl;
     m2.printAll();
     cout<<endl;
     
     cout << m2(2,2) << endl << endl;
     
     m1.transpose(); //back to original
     mat44 m3 = m1 * m2;
     m3.printAll();
     cout<<endl;*/
     
     vec4 v1(7.0, 8.0, 9.0, 6.0);
     
     m1.printAll();
     cout <<endl << v1.x << " " << v1.y << " " << v1.z << " " << v1.t << endl;
     
     v1 = m1*v1;
     cout << v1.x << " " << v1.y << " " << v1.z << " " << v1.t << endl;
     
     
     
     
     /*mat33 m1(1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f);
    
    //print 3x3 matrix
    m1.printAll();
    
    //transpose 3x3 matrix and print
    cout << endl;
    m1.transpose();
    m1.printAll();
    
    //test operator() overload
    cout << endl << m1(1,1) << endl;
    m1(1,1) = 0;
    cout << m1(1,1) << endl;
    m1(1,1) += 1;
    cout << m1(1,1) << endl;
    m1(1,1) *= 5;
    cout << m1(1,1) << endl;
    
    //test multiplication
    mat33 m2(2.0, 4.0, 6.0, 8.0, 10.0, 12.0, 14.0, 16.0, 18.0), m3;
    m3 = m1*m2;
    cout << endl;
    m3.printAll();
    
    //test matrix*vec3 multiplication
    mat33 m4(-4.0,-6.0,2.0, -8.0,4.0,4.0, 6.0,-3.0,-1.0);
    simphys::vec3 v1(-2.0,2.0,1.0),v2;
    
    v2 = m4*v1;
    cout << endl <<endl<<endl << v2.toString() << endl;*/
    
    /*
    mat22 m1(1.0f, 2.0f, 3.0f, 4.0f);
    
    //print matrix
    m1.printAll();
    cout << endl;
    
    //print matrix transpose
    m1.transpose();
    m1.printAll();
    cout << endl;
    
    //print matrix elements or transpose
    cout << m1(0,0) << " " << m1(0,1) << endl
         << m1(1,0) << " " << m1(1,1) << endl << endl;
    
    //change one of the elements, reprint
    m1(0,0) = 9.0f;
    m1.printAll();
    cout << endl;
    
    //Matrix multiplication
    cout << "Matrix Multiplication" << endl;
    mat22 m2(1.0,0.0,0.0,1.0), m3(-8.0,4.0,2.0,5.0), m4;
    m4 = m2 * m3;
    m4.printAll();
    
    //Matrix * vec2
    vec2 vec(4.0f, 6.0f);
    mat22 m5(2.0f, 3.0f, 1.0f, 7.0f);
    
    vec = m5 * vec;
    
    cout << endl << "Matrix * Vector (2x1)" << endl
         << vec.x << endl << vec.y << endl;
    
    
    mat22 m{0.707, -0.707, 0.707, 0.707};
mat22 m1{0.707, -0.707, 0.707, 0.707};
m1.transpose();
std::cout << m(0,0) << " " << m(0,1) << "\n"
<< m(1,0) << " " << m(1,1) << std::endl;
auto m2 = m * m1;
std::cout << std::endl;
std::cout << m2(0,0) << " " << m2(0,1) << "\n"
<< m2(1,0) << " " << m2(1,1) << std::endl;
m2(0,0) *= 2;
std::cout << std::endl;
std::cout << m2(0,0) << " " << m2(0,1) << "\n"
<< m2(1,0) << " " << m2(1,1) << std::endl;*/
    
    
    return 0;
}