// Example program
#include <iostream>
#include <string>
#include <cmath>
template <typename T>

class Vec3{
    
    public:
    
    T x;
    T y;
    T z;
    
    Vec3(const T _x,const T _y,const T _z)
    {
        x = _x;
        y = _y;
        z = _z;
    }
     Vec3()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    Vec3(Vec3 _vec)
    {
        x = _vec.x;
        y = vec.y;
        z = vec.z;
    }
    
    Vec3 operator +(const Vec3 &_vec1)
    {
        Vec3 result;
        result.x = x + _vec1.x;
        result.y = y + _vec1.y;
        result.z = z + _vec1.z;
        return result;
    }
    
    public void Normalize()
    {
        int result = (x*x + y*y + z*z);
        result = (sqrt) result;
        
        x / result;
        y / result;
        z / result;
        
    }
    public void toZero()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    public float DistanceVec(const Vec3 vec)
    {
        Vec3 result;
        float distance;
        
        result.x = x - vec.x;
        result.y = y - vec.y;
        result.z = z - vec.z;
        
        distance = (result.x * result.x, result.y * result.y, result.z * result.z)
        distance = sqrt(distance);
        
        return distance;

    }
    }

int main()
{
    Vec3<int> v1 = Vec3<int>();
    Vec3<float> v1 = Vec3<float>();
}
