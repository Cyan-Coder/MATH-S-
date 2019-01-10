#include "GFXmath.h"
#include <math.h>

namespace maths { namespace operant {

		maths::vector::vect4 concat(const maths::vector::vect2& a, const maths::vector::vect2& b) {
			return maths::vector::vect4(a.x, a.y, b.x, b.y);
		};

		maths::vector::vect4 decompose(const maths::vector::vect2& p, const maths::vector::vect2& v) {
			maths::vector::vect2 i;
			maths::vector::vect2 j;

			i.x = 0;
			i.y = v.y;

			j.x = v.x;
			j.y = 0;

			i.rotate(atan(p.y / p.x));
			j.rotate(atan(p.y / p.x));

			return concat(i, j);
		};

		maths::matrix::mat2 combine(const maths::vector::vect2& a, const maths::vector::vect2& b) {
			maths::matrix::mat2 m(a.x, a.y, b.x, b.y);
			return m;
		};

		maths::vector::vect2 unit(const maths::vector::vect2& u) {
			maths::vector::vect2 m(u.x * (1 / maths::operant::mag(u)), u.y * (1 / maths::operant::mag(u)));
			return m;
		};

		maths::vector::vect3 unit(const maths::vector::vect3& u) {
			maths::vector::vect3 m(u.x * (1 / maths::operant::mag(u)), u.y * (1 / maths::operant::mag(u)), u.z * (1 / maths::operant::mag(u)));
			return m;
		};

		maths::vector::vect4 unit(const maths::vector::vect4& u) {
			maths::vector::vect4 m(u.x * (1 / maths::operant::mag(u)), u.y * (1 / maths::operant::mag(u)), u.z * (1 / maths::operant::mag(u)), u.w * (1 / maths::operant::mag(u)));
			return m;
		};

		double mag(maths::vector::vect2 a) {
			return sqrt(a.x * a.x + a.y * a.y);
		};

		double mag(maths::vector::vect3 a) {
			return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
		};

		double mag(maths::vector::vect4 a) {
			return sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w);
		};

		double outProduct(maths::vector::vect2 a, maths::vector::vect2 b) {
			return a.x * b.y - a.y * b.x;
		};

		double inProduct(maths::vector::vect2 a, maths::vector::vect2 b) {
			return a.x * b.x + a.y * b.y;
		};

		double inProduct(maths::vector::vect3 a, maths::vector::vect3 b) {
			return a.x * b.x + a.y * b.y + a.z * b.z;
		};

		double inProduct(maths::vector::vect4 a, maths::vector::vect4 b) {
			return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
		};
}; };