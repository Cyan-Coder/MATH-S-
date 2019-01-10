#pragma once

#include <iostream>


namespace maths { namespace vector {
		struct vect4 {
			double x, y, z, w;

			vect4();
			vect4(const double& x, const double& y, const double& z, const double& w);

			vect4 add(const vect4& b);
			vect4 sub(const vect4& b);
			double dot(const vect4& b);

			vect4 scale(const double& scale);
			vect4 translate(const double& cx, const double& cy, const double& cz, const double& cw);

			friend vect4 operator+(vect4 a, const vect4& b);
			friend vect4 operator-(vect4 a, const vect4& b);
			friend vect4 operator*(vect4& v, const double& s);
			friend double operator*(const vect4& a, const vect4& b);

			friend std::ostream& operator<<(std::ostream& stream, const vect4& vector);

		};
}; };