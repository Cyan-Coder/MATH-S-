#include "Vect2.h"

namespace maths{ namespace vector {

	vect2::vect2() {
		x = 0.0;
		y = 0.0;
	};

	vect2::vect2(const double& x, const double& y) {
		this->x = x;
		this->y = y;
	};

	vect2 vect2::add(const vect2& b) {
		x += b.x;
		y += b.y;

		return *this;
	};
	
	vect2 vect2::sub(const vect2& b) {
		x -= b.x;
		y -= b.y;

		return *this;
	};

	double vect2::dot(const vect2& b){ 
		return x * b.x + y * b.y;
	};

	vect2 vect2::scale(const double& scale) {
		x *= scale;
		y *= scale;

		return *this;
	};
	
	vect2 vect2::rotate(const double& angle) {
		//YOU SHOULD ALWAYS USE RADIANS NO DEGREES HERE!!!
		double tempx = x * std::cos(angle) - y * std::sin(angle);
		double tempy = x * std::sin(angle) + y * std::cos(angle);

		x = tempx;
		y = tempy;

		return *this;
	};

	vect2 vect2::translate(const double& cx, const double& cy)
	{
		x += cx;
		y += cy;

		return *this;
	};

	vect2 operator+(vect2 a, const vect2& b) {
		return a.add(b);
	};

	vect2 operator-(vect2 a, const vect2& b) {
		return a.sub(b);
	};

	vect2 operator*(vect2 v, const double& s) {
		return v.scale(s);
	};

	double operator*(vect2& a, const vect2& b) {
		return a.dot(b);
	};

	std::ostream& operator<<(std::ostream& stream, const vect2& vector) {
		stream << "-Vect2, X:= " << vector.x << ", Y:= " << vector.y;
		return stream;
	};

}; };