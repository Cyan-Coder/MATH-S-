#pragma once

#include <iostream>

namespace maths { namespace matrix {
		struct mat3 {
			double data[3 * 3];

			mat3();
			mat3(double a, double b, double c, double d, double e, double f, double g, double h, double i);
			mat3(double d[9]);

			mat3 add(const mat3& b);
			mat3 sub(const mat3& b);
			//mat3 multiply(const mat3& b);

			mat3 scale(const double& s);
			//mat3 adj();
			//mat3 inverse();

			//double determinant();

			friend mat3 operator+(mat3 a, const mat3& b);
			friend mat3 operator-(mat3 a, const mat3& b);
			//friend mat3 operator*(mat3 a, const mat3& b);
			friend mat3 operator*(mat3 m, const double& s);
			friend std::ostream& operator<<(std::ostream& stream, const mat3& matrix);

		};
}; };