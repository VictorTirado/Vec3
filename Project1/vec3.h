#ifndef _vec3_
#define _vec3_

using namespace std;

template <class Type_>
class Vec3
{
public:
	Type_ x, y, z;

	Vec3() {};
	Vec3(Type_ x, Type_ y, Type_ z) :x(x),y(y),z(z){}
	Vec3(const Vec3 &v2): x(v.x),y(v.y),z(v.z){}
	

	Vec3 operator +(Vec3 &v2) const
	{
		return Vec3(x + v2.x,y + v2.y, z + v2.z);
	}
	Vec3 operator -(Vec3 &v2) const
	{
		return Vec3(x - v2.x,y - v2.y, z - v2.z);
	}
	Vec3 operator +=(Vec3 &v2)
	{
		x -= v2.x;
		y -= v2.y;
		z -= v2.z;

		return(*this);
	}
	Vec3 operator -=(Vec3 &v2)
	{
		x -= v2.x;
		y -= v2.y;
		z -= v2.z;

		return(*this);
	}
	bool operator ==(Vec3 &v2)
	{
		return (x == v2.x && y == v2.y && z == v2.z);	
	}

	void normalize(Vec3 &v2)
	{
		float result;
		result = sqrt(x*x + y*y + z*z);
		v2.x = x / result;
		v2.y = y / result;
		v2.z = z / result;
	}

	void zero(Vec3 &v2)
	{
		v2.x = v2.y = v2.z = 0;
	}

	bool is_zero(Vec3 &v2) const
	{
		return (x == v2.x && y == v2.y && z == v2.z);
	}
	Vec3 distance_to(const Vec3 &v2)
	{
		Vec3 v4;
		v4.x = v2.x - v.x;
		v4.y = v2.y - v.y;
		v4.z = v2.z - v.z;
		return v4;
	}
};
typedef Vec3<int> iVec3;
typedef Vec3<float> fVec3;
#endif
