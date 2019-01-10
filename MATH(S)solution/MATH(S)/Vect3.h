#pragma once

#include <iostream>


namespace maths { namespace vector {
		struct vect3 {
			double x, y, z;

			vect3();
			vect3(const double& x, const double& y, const double& z);

			vect3 add(const vect3& b);
			vect3 sub(const vect3& b);
			double dot(const vect3& b);

			vect3 scale(const double& scale);
			vect3 rotate(const double& angleX, const double& angleY, const double& angleZ);
			vect3 translate(const double& cx, const double& cy, const double& cz);

			static vect3 cross(const vect3& a, const vect3& b);

			friend vect3 operator+(vect3 a, const vect3& b);
			friend vect3 operator-(vect3 a, const vect3& b);
			friend vect3 operator*(vect3& v, const double& s);
			friend double operator*(const vect3& a, const vect3& b);

			friend std::ostream& operator<<(std::ostream& stream, const vect3& vector);

		};
}; };