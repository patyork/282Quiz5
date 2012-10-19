struct vec4
{
        float x,y,z,t;
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
};
