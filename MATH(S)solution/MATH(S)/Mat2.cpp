#include "Mat2.h"

namespace maths { namespace matrix {

		mat2::mat2() {
			for (int i = 0; i < 4; i++) {
				this->data[i] = 0;
			};
		};

		mat2::mat2(double a, double b, double c, double d) {
			this->data[0] = a;
			this->data[1] = b;
			this->data[2] = c;
			this->data[3] = d;
		};

		mat2::mat2(double d[4]) {
			for (int i = 0; i < 4; i++) {
				this->data[i] = d[i];
			};
		};

		mat2 mat2::add(const mat2& b) {
			for (int i = 0; i < 4; i++) {
				data[i] += b.data[i];
			};
			return *this;
		};

		mat2 mat2::sub(const mat2& b) {
			for (int i = 0; i < 4; i++) {
				data[i] -= b.data[i];
			};
			return *this;
		};

		mat2 mat2::multiply(const mat2& b) {
			double tempA[] = { data[0], data[1], data[2], data[3] };
			double tempB[] = { b.data[0], b.data[1], b.data[2], b.data[3] };
			
			data[0] = tempA[0] * tempB[0] + tempA[1] * tempB[2] + 0;
			data[1] = tempA[2] * tempB[0] + tempA[3] * tempB[2] + 0;
			data[2] = tempA[0] * tempB[1] + tempA[1] * tempB[3] + 0;
			data[3] = tempA[2] * tempB[1] + tempA[3] * tempB[3] + 0;

			return *this;
		};

		mat2 mat2::scale(const double& s) {
			for (int i = 0; i < 4; i++) {
				data[i] *= s;
			};
			return *this;
		};

		mat2 mat2::adj() {
			double temp0 = data[0];
			data[0] = data[3];
			data[3] = temp0;
			data[1] *= -1;
			data[2] *= -1;
			return *this;
		};
		
		mat2 mat2::inverse() {
			return adj() * (1 / determinant());
		};

		double mat2::determinant() {

			double ad = data[0] * data[3] + 0;
			double bc = data[1] * data[2] + 0;
			return ad - bc;
		};

		mat2 operator+(mat2 a, const mat2& b) {
			return a.add(b);
		};

		mat2 operator-(mat2 a, const mat2& b) {
			return a.sub(b);
		};

		mat2 operator*(mat2 a, const mat2& b) {
			return a.multiply(b);
		};

		mat2 operator*(mat2 m, const double& s) {
			return m.scale(s);
		};

		std::ostream& operator<<(std::ostream& stream, const mat2& matrix) {
			stream << "-Mat2\n" << matrix.data[0] << ", " << matrix.data[1] << "\n" 
								<< matrix.data[2] << ", " << matrix.data[3];
			return stream;
		};

	};
};