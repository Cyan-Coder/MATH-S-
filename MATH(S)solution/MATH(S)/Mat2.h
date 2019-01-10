#pragma once

#include <iostream>

namespace maths { namespace matrix {
		struct mat2 {
			double data[2 * 2];

			mat2();
			mat2(double a, double b, double c, double d);
			mat2(double d[4]);

			mat2 add(const mat2& b);
			mat2 sub(const mat2& b);
			mat2 multiply(const mat2& b);

			mat2 scale(const double& s);
			mat2 adj();
			mat2 inverse();
			
			double determinant();

			friend mat2 operator+(mat2 a, const mat2& b);
			friend mat2 operator-(mat2 a, const mat2& b);
			friend mat2 operator*(mat2 a, const mat2& b);
			friend mat2 operator*(mat2 m, const double& s);
			friend std::ostream& operator<<(std::ostream& stream, const mat2& matrix);

		};
}; };