#ifndef _vec3_
#define _vec3_


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
		x += v2.x;
		y += v2.y;
		z += v2.z;

		return(*this);
	}
	Vec3 operator -=(Vec3 &v2)
	{
		x -= v2.x;
		y -= v2.y;
		z -= v2.z;

		return(*this);
	}

	Vec3 operator =(const Vec3 &v2)const
	{
		x = v2.x;
		y = v2.y;
		z = v2.z;
	}
	bool operator ==(Vec3 &v2)const
	{
		return (x == v2.x && y == v2.y && z == v2.z);	
	}

	void normalize()
	{
		Type_ result = sqrt(x*x + y * y + z * z);
		v.x = x / result;
		v.y = y / result;
		v.z = z / result;
	}

	void zero()
	{
		v.x = v.y = v.z = 0;
	}

	bool is_zero() const
	{
		return (x == 0 && y == 0 && z == 0);
	}
	float distance_to(const Vec3 &v2)
	{
		return sqrt((v2.x - v.x)*(v2.x - v.x) + (v2.y - v.y)*(v2.y - v.y) + (v2.z - v.z)*(v2.z - v.z));
	}

	Vec3 distance_to_squared(const Vec3 &v2)
	{
		return (v2.x - v.x)*(v2.x - v.x) + (v2.y - v.y)*(v2.y - v.y) + (v2.z - v.z)*(v2.z - v.z);
	}
};
typedef Vec3<int> iVec3;
typedef Vec3<float> fVec3;
#endif
