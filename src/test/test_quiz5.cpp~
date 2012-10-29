#include "mat22.h"
#include "mat33.h"
#include "mat44.h"
#include "vec3.h"

#include "gtest/gtest.h"


// 2x2 Matrix Tests
TEST(Mat22Test, CheckTranspose)
{
	simphys::mat22 m{0.707, -0.707, 0.707, 0.707};
	m.transpose();
	
	EXPECT_FLOAT_EQ( m(0,0), 0.707);
	EXPECT_FLOAT_EQ( m(0,1), 0.707);
	EXPECT_FLOAT_EQ( m(1,0), -0.707);
	EXPECT_FLOAT_EQ( m(1,1), 0.707);
}

TEST(Mat22Test, ElementMultiplication)
{
	simphys::mat22 m{1,2,3,4};
	
	m(1,1) *= 2;
	
	EXPECT_FLOAT_EQ( m(0,0), 1);
	EXPECT_FLOAT_EQ( m(0,1), 2);
	EXPECT_FLOAT_EQ( m(1,0), 3);
	EXPECT_FLOAT_EQ( m(1,1), 8);
}

TEST(Mat22Test, MatrixMultiplication)
{
	simphys::mat22 m{1,2,3,4};
	simphys::mat22 m1{4,3,2,1};
	
	simphys::mat22 m2;
	m2 = m * m1;
	
	EXPECT_FLOAT_EQ( m2(0,0), 8);
	EXPECT_FLOAT_EQ( m2(0,1), 5);
	EXPECT_FLOAT_EQ( m2(1,0), 20);
	EXPECT_FLOAT_EQ( m2(1,1), 13);
}

TEST(Mat22Test, VectorMultiplication)
{
	simphys::mat22 m{2,3,1,7};
	simphys::vec2 v1{4,6};
	
	v1 = m*v1;
	
	EXPECT_FLOAT_EQ( v1.x, 26);
	EXPECT_FLOAT_EQ( v1.y, 46);
}



// 3x3 Matrix Tests
TEST(Mat33Test, CheckTranspose)
{
	simphys::mat33 m{0,1,2, 3,4,5, 6,7,8};
	m.transpose();
	
	EXPECT_FLOAT_EQ( m(0,0), 0);
	EXPECT_FLOAT_EQ( m(0,1), 3);
	EXPECT_FLOAT_EQ( m(0,2), 6);
	
	EXPECT_FLOAT_EQ( m(1,0), 1);
	EXPECT_FLOAT_EQ( m(1,1), 4);
	EXPECT_FLOAT_EQ( m(1,2), 7);
	
	EXPECT_FLOAT_EQ( m(2,0), 2);
	EXPECT_FLOAT_EQ( m(2,1), 5);
	EXPECT_FLOAT_EQ( m(2,2), 8);
}

TEST(Mat33Test, ElementMultiplication)
{
	simphys::mat33 m{0,1,2, 3,4,5, 6,7,8};
	m.transpose();
	
	m(1,1) *= 2;
	
	EXPECT_FLOAT_EQ( m(0,0), 0);
	EXPECT_FLOAT_EQ( m(0,1), 3);
	EXPECT_FLOAT_EQ( m(0,2), 6);
	
	EXPECT_FLOAT_EQ( m(1,0), 1);
	EXPECT_FLOAT_EQ( m(1,1), 8);
	EXPECT_FLOAT_EQ( m(1,2), 7);
	
	EXPECT_FLOAT_EQ( m(2,0), 2);
	EXPECT_FLOAT_EQ( m(2,1), 5);
	EXPECT_FLOAT_EQ( m(2,2), 8);
}

TEST(Mat33Test, MatrixMultiplication)
{
	simphys::mat33 m{0,1,2, 3,4,5, 6,7,8};
	simphys::mat33 m1{8,7,6, 5,4,3, 2,1,0};
	
	simphys::mat33 m2 = m * m1;
	
	EXPECT_FLOAT_EQ( m2(0,0), 9);
	EXPECT_FLOAT_EQ( m2(0,1), 6);
	EXPECT_FLOAT_EQ( m2(0,2), 3);
	
	EXPECT_FLOAT_EQ( m2(1,0), 54);
	EXPECT_FLOAT_EQ( m2(1,1), 42);
	EXPECT_FLOAT_EQ( m2(1,2), 30);
	
	EXPECT_FLOAT_EQ( m2(2,0), 99);
	EXPECT_FLOAT_EQ( m2(2,1), 78);
	EXPECT_FLOAT_EQ( m2(2,2), 57);
}

TEST(Mat33Test, VectorMultiplication)
{
	simphys::mat33 m{0,1,2, 3,4,5, 6,7,8};
	simphys::vec3 v1{4,6,2};
	
	v1 = m*v1;
	
	EXPECT_FLOAT_EQ( v1.getX(), 12);
	EXPECT_FLOAT_EQ( v1.getY(), 72);
	EXPECT_FLOAT_EQ( v1.getZ(), 42);
}



// 4x4 Matrix Tests
TEST(Mat44Test, CheckTranspose)
{
	simphys::mat44 m{0,1,2,3, 4,5,6,7, 8,9,10,11, 12,13,14,15};
	m.transpose();
	
	EXPECT_FLOAT_EQ( m(0,0), 0);
	EXPECT_FLOAT_EQ( m(0,1), 4);
	EXPECT_FLOAT_EQ( m(0,2), 8);
	EXPECT_FLOAT_EQ( m(0,3), 12);
	
	EXPECT_FLOAT_EQ( m(1,0), 1);
	EXPECT_FLOAT_EQ( m(1,1), 5);
	EXPECT_FLOAT_EQ( m(1,2), 9);
	EXPECT_FLOAT_EQ( m(1,3), 13);
	
	EXPECT_FLOAT_EQ( m(2,0), 2);
	EXPECT_FLOAT_EQ( m(2,1), 6);
	EXPECT_FLOAT_EQ( m(2,2), 10);
	EXPECT_FLOAT_EQ( m(2,3), 14);
	
	EXPECT_FLOAT_EQ( m(3,0), 3);
	EXPECT_FLOAT_EQ( m(3,1), 7);
	EXPECT_FLOAT_EQ( m(3,2), 11);
	EXPECT_FLOAT_EQ( m(3,3), 15);
}

TEST(Mat44Test, ElementMultiplication)
{
	simphys::mat44 m{0,1,2,3, 4,5,6,7, 8,9,10,11, 12,13,14,15};
	m.transpose();
	
	m(2,1) *= 5;
	
	EXPECT_FLOAT_EQ( m(0,0), 0);
	EXPECT_FLOAT_EQ( m(0,1), 4);
	EXPECT_FLOAT_EQ( m(0,2), 8);
	EXPECT_FLOAT_EQ( m(0,3), 12);
	
	EXPECT_FLOAT_EQ( m(1,0), 1);
	EXPECT_FLOAT_EQ( m(1,1), 5);
	EXPECT_FLOAT_EQ( m(1,2), 9);
	EXPECT_FLOAT_EQ( m(1,3), 13);
	
	EXPECT_FLOAT_EQ( m(2,0), 2);
	EXPECT_FLOAT_EQ( m(2,1), 30);
	EXPECT_FLOAT_EQ( m(2,2), 10);
	EXPECT_FLOAT_EQ( m(2,3), 14);
	
	EXPECT_FLOAT_EQ( m(3,0), 3);
	EXPECT_FLOAT_EQ( m(3,1), 7);
	EXPECT_FLOAT_EQ( m(3,2), 11);
	EXPECT_FLOAT_EQ( m(3,3), 15);
}

TEST(Mat44Test, MatrixMultiplication)
{
	simphys::mat44 m0{0,1,2,3, 4,5,6,7, 8,9,10,11, 12,13,14,15};
	simphys::mat44 m1{15,14,13,12, 11,10,9,8, 7,6,5,4, 3,2,1,0};
	
	simphys::mat44 m=m0*m1;
	
	EXPECT_FLOAT_EQ( m(0,0), 34);
	EXPECT_FLOAT_EQ( m(0,1), 28);
	EXPECT_FLOAT_EQ( m(0,2), 22);
	EXPECT_FLOAT_EQ( m(0,3), 16);
	
	EXPECT_FLOAT_EQ( m(1,0), 178);
	EXPECT_FLOAT_EQ( m(1,1), 156);
	EXPECT_FLOAT_EQ( m(1,2), 134);
	EXPECT_FLOAT_EQ( m(1,3), 112);
	
	EXPECT_FLOAT_EQ( m(2,0), 322);
	EXPECT_FLOAT_EQ( m(2,1), 284);
	EXPECT_FLOAT_EQ( m(2,2), 246);
	EXPECT_FLOAT_EQ( m(2,3), 208);
	
	EXPECT_FLOAT_EQ( m(3,0), 466);
	EXPECT_FLOAT_EQ( m(3,1), 412);
	EXPECT_FLOAT_EQ( m(3,2), 358);
	EXPECT_FLOAT_EQ( m(3,3), 304);
}

TEST(Mat44Test, VectorMultiplication)
{
	simphys::mat44 m{2,3,1,7, 2,3,1,7, 2,3,1,7, 2,3,1,7};
	simphys::vec4 v1{4,6,2,1};
	
	v1 = m*v1;
	
	EXPECT_FLOAT_EQ( v1.x, 35);
	EXPECT_FLOAT_EQ( v1.y, 35);
	EXPECT_FLOAT_EQ( v1.z, 35);
	EXPECT_FLOAT_EQ( v1.t, 35);
}

