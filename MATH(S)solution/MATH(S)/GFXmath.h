#pragma once

#include "Vect2.h"
#include "Vect3.h"
#include "Vect4.h"

#include "Mat2.h"

#include "math.h"

#define PI			3.14159265359
#define TAU			6.28318530718 
#define H_PI		1.57079632679
#define E			2.71828182846
#define ROOT_TWO	1.41421356237
#define G_RATIO		1.61803398875

namespace maths { namespace operant {
	maths::vector::vect4 concat(const maths::vector::vect2& a, const maths::vector::vect2& b);
	maths::vector::vect4 decompose(const maths::vector::vect2& p, const maths::vector::vect2& v);
	maths::matrix::mat2 combine(const maths::vector::vect2& a, const maths::vector::vect2& b);

	maths::vector::vect2 unit(const maths::vector::vect2& u);
	maths::vector::vect3 unit(const maths::vector::vect3& u);
	maths::vector::vect4 unit(const maths::vector::vect4& u);

	double mag(maths::vector::vect2 a);
	double mag(maths::vector::vect3 a);
	double mag(maths::vector::vect4 a);

	double outProduct(maths::vector::vect2 a, maths::vector::vect2 b);

	double inProduct(maths::vector::vect2 a, maths::vector::vect2 b);
	double inProduct(maths::vector::vect3 a, maths::vector::vect3 b);
	double inProduct(maths::vector::vect4 a, maths::vector::vect4 b);
}; };