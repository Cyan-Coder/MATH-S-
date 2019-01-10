#include "Vect4.h"

namespace maths { namespace vector {

		vect4::vect4() {
			x = 0.0;
			y = 0.0;
			z = 0.0;
		};

		vect4::vect4(const double& x, const double& y, const double& z, const double& w) {
			this->x = x;
			this->y = y;
			this->z = z;
			this->w = w;
		};

		vect4 vect4::add(const vect4& b) {
			x += b.x;
			y += b.y;
			z += b.z;
			w += b.w;

			return *this;
		};

		vect4 vect4::sub(const vect4& b) {
			x -= b.x;
			y -= b.y;
			z -= b.z;
			w -= b.w;

			return *this;
		};

		double vect4::dot(const vect4& b) {
			return x * b.x + y * b.y + z * b.z + w * b.w;
		};

		vect4 vect4::scale(const double& scale) {
			x *= scale;
			y *= scale;
			z *= scale;
			w *= scale;

			return *this;
		};

		vect4 vect4::translate(const double& cx, const double& cy, const double& cz, const double& cw)
		{
			x += cx;
			y += cy;
			z += cz;
			w += cw;

			return *this;
		};

		vect4 operator+(vect4 a, const vect4& b) {
			return a.add(b);
		};

		vect4 operator-(vect4 a, const vect4& b) {
			return a.sub(b);
		};

		vect4 operator*(vect4& v, const double& s) {
			return v.scale(s);
		};

		double operator*(vect4& a, const vect4& b) {
			return a.dot(b);
		};

		std::ostream& operator<<(std::ostream& stream, const vect4& vector) {
			stream << "-Vect4, X:= " << vector.x << ", Y:= " << vector.y << ", Z:= " << vector.z << ", W:= " << vector.w;
			return stream;
		};
}; };