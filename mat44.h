struct vec4
{
        float x,y,z,t;
        vec4()
        {
             t=z=y=x=0.0f;
        }
        vec4(float nx, float ny, float nz, float nt)
        {
             x = nx;
             y=ny;
             z=nz;
             t=nt;
        }
        
};

class mat44
{
	private:
             float data[4][4];
	public:
            mat44();
            mat44(float a1, float a2, float a3, float a4, float b1, float b2, float b3, float b4,
                    float c1, float c2, float c3, float c4, float d1, float d2, float d3, float d4);
            
            void transpose();
            //print matrix
            void printAll();

            //Overloaded function call operator
            float& operator()(int i, int j);

            //Overloaded * operator (mat44 * mat44)
            friend mat44 operator*( mat44& left, mat44& right);
            
            //Overloaded * operator (mat44 * vec4)
            friend vec4 operator*( mat44& left, vec4& right);




};
