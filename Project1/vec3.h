#ifndef _vec3_
#define _vec3_

using namespace std;

template <class T>
class Vec3
{
public:
	T x, y, z;

	Vec3() {};
	Vec3(T x, T y, T z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vec3(const Vec3 &v)
	{
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;
	};
	

	Vec3 operator +(Vec3 &v2)
	{
		Vec3 result;
		result.x = x + v2.x;
		result.y = y + v2.y;
		result.z = z + v2.z;
		return result;
	}
	Vec3 operator -(Vec3 &v2)
	{
		Vec3 result;
		result.x = x - v2.x;
		result.y = y - v2.y;
		result.z = z - v2.z;
		return result;
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
		if (x == v2.x && y == v2.y && z == v2.z)
			return true;
		else
			return false;		
	}

	void normalize(Vec3 &v2)
	{
		float result;
		result = sqrt((pow(x, 2)) + (pow(y, 2)) + (pow(z, 2)));
		v2.x = x / result;
		v2.y = y / result;
		v2.z = z / result;
	}

	void zero(Vec3 &v2)
	{
		v2.x = v2.y = v2.z = 0;
	}

	bool is_zero(Vec3 &v2)
	{
		if (v2.x == 0 && v2.y == 0 && v2.z == 0) {
			cout << "v1 is zero ? True" << endl;
			return true;
		}
		else{
			cout << "v1 is zero ? False" << endl;
		return false;
	}
	}
	Vec3 distance_to(Vec3 &v, Vec3 &v2)
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