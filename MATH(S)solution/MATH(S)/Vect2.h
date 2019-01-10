#pragma once

#include <iostream>


namespace maths { namespace vector {
		struct vect2 {
			double x, y;

			vect2();
			vect2(const double& x, const double& y);

			vect2 add(const vect2& b);
			vect2 sub(const vect2& b);
			double dot(const vect2& b);

			vect2 scale(const double& scale);
			vect2 rotate(const double& angle);
			vect2 translate(const double& cx, const double& cy);

			friend vect2 operator+(vect2 a, const vect2& b);
			friend vect2 operator-(vect2 a, const vect2& b);
			friend vect2 operator*(vect2 v, const double& s);
			friend double operator*(const vect2& a, const vect2& b);

			friend std::ostream& operator<<(std::ostream& stream, const vect2& vector);

		};
}; };