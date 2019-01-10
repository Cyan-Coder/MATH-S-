#include "Vect3.h"

namespace maths { namespace vector {

		vect3::vect3() {
			x = 0.0;
			y = 0.0;
			z = 0.0;
		};

		vect3::vect3(const double& x, const double& y, const double& z) {
			this->x = x;
			this->y = y;
			this->z = z;
		};

		vect3 vect3::add(const vect3& b) {
			x += b.x;
			y += b.y;
			z += b.z;

			return *this;
		};

		vect3 vect3::sub(const vect3& b) {
			x -= b.x;
			y -= b.y;
			z -= b.z;

			return *this;
		};

		double vect3::dot(const vect3& b) {
			return x * b.x + y * b.y + z * b.z;
		};

		vect3 vect3::scale(const double& scale) {
			x *= scale;
			y *= scale;
			z *= scale;

			return *this;
		};

		vect3 vect3::rotate(const double& angleX, const double& angleY, const double& angleZ) {
			//YOU SHOULD ALWAYS USE RADIANS NO DEGREES HERE!!!
			double tempx = (x * cos(angleZ) - y * sin(angleZ)) * (x * cos(angleY) + z * sin(angleY)) * (x);
			double tempy = (x * sin(angleZ) + y * cos(angleZ)) * (y) * (y * cos(angleX) - z * sin(angleX));
			double tempz = (z) * (-x * sin(angleY) + z * cos(angleY)) * (y * sin(angleZ) + z * cos(angleZ));

			x = tempx;
			y = tempy;
			z = tempz;

			return *this;
		};

		vect3 vect3::translate(const double& cx, const double& cy, const double& cz)
		{
			x += cx;
			y += cy;
			z += cz;

			return *this;
		};

		vect3 vect3::cross(const vect3& a, const vect3& b) {
			vect3 normal;
			normal.x = a.y * b.z - b.y * a.z;
			normal.y = a.z * b.x - b.z * a.x;
			normal.z = a.x * b.y - b.x * a.y;
			
			return normal;
		};

		vect3 operator+(vect3 a, const vect3& b) {
			return a.add(b);
		};

		vect3 operator-(vect3 a, const vect3& b) {
			return a.sub(b);
		};

		vect3 operator*(vect3& v, const double& s) {
			return v.scale(s);
		};
		
		double operator*(vect3& a, const vect3& b) {
			return a.dot(b);
		};

		std::ostream& operator<<(std::ostream& stream, const vect3& vector) {
			stream << "-Vect3, X:= " << vector.x << ", Y:= " << vector.y << ", Z:= " << vector.z;
			return stream;
		};
}; };