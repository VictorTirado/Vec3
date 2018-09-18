#include <iostream>
#include "vec3.h"

using namespace std;


int main()
{
	fVec3 v1, v2,v3, v4;
	bool same = true;
	cout << "Coordinate X:" << endl;
	cin >> v1.x;
	cout << "Coordinate Y:" << endl;
	cin >> v1.y;
	cout << "Coordinate Z:" << endl;
	cin >> v1.z;
	cout << "Coordinate X2:" << endl;
	cin >> v2.x;
	cout << "Coordinate Y2:" << endl;
	cin >> v2.y;
	cout << "Coordinate Z2:" << endl;
	cin >> v2.z;
	cout << "Vector 1: {" << v1.x << "," << v1.y << "," << v1.z << "}" << endl;
	cout << "Vector 2: {" << v2.x << "," << v2.y << "," << v2.z << "}" << endl;
	v3 = v1 + v2;
	cout << "v1 + v2= " << v3.x<<","<<v3.y<<","<<v3.z << endl;
	v3 = v1 - v2;
	cout << "v1 - v2= " << v3.x << "," << v3.y << "," << v3.z << endl;
	v4 = v1;
	v4 += v2;
	cout << "v1 += v2= " << v4.x << "," << v4.y << "," << v4.z << endl;
	v4 = v1;
	v4 -= v2;
	cout << "v1 -= v2= " << v4.x << "," << v4.y << "," << v4.z << endl;
	
	v4 = v1;
	v4.normalize(v4);
	cout <<"Normalized vector 1: "<< v4.x << "," << v4.y << "," << v4.z << endl;
	v4.zero(v4);
	cout <<"Zero:"<< v4.x << "," << v4.y << "," << v4.z << endl;
	v4 = v1;
	same = v4.is_zero(v4);
	v3 = v1.distance_to(v1, v2);
	cout <<"Distance v1 to v2: "<< v3.x << "," << v3.y << "," << v3.z << endl;
	
	
	
		
	
	system("pause");
	return 0;
}