#include "Mat3.h"

namespace maths { namespace matrix {

		mat3::mat3() {
			for (int i = 0; i < 9; i++) {
				this->data[i] = 0;
			};
		};

		mat3::mat3(double a, double b, double c, double d, double e, double f, double g, double h, double i) {
			this->data[0] = a;
			this->data[1] = b;
			this->data[2] = c;
			this->data[3] = d;
			this->data[4] = e;
			this->data[5] = f;
			this->data[6] = g;
			this->data[7] = h;
			this->data[8] = i;
		};

		mat3::mat3(double d[9]) {
			for (int i = 0; i < 9; i++) {
				this->data[i] = d[i];
			};
		};

		mat3 mat3::add(const mat3& b) {
			for (int i = 0; i < 9; i++) {
				data[i] += b.data[i];
			};
			return *this;
		};

		mat3 mat3::sub(const mat3& b) {
			for (int i = 0; i < 9; i++) {
				data[i] -= b.data[i];
			};
			return *this;
		};

		/*mat2 mat2::multiply(const mat2& b) {
			double tempA[4];
			double tempB[4];

			for (int i = 0; i < 4; i++)
			{
				tempA[i] = data[i];
				tempB[i] = b.data[i];
			};

			data[0] = tempA[0] * tempB[0] + tempA[1] * tempB[2] + 0;
			data[1] = tempA[2] * tempB[0] + tempA[3] * tempB[2] + 0;
			data[2] = tempA[0] * tempB[1] + tempA[1] * tempB[3] + 0;
			data[3] = tempA[2] * tempB[1] + tempA[3] * tempB[3] + 0;

			return *this;
		};*/

		mat3 mat3::scale(const double& s) {
			for (int i = 0; i < 9; i++) {
				data[i] *= s;
			};
			return *this;
		};

		/*mat2 mat2::adj() {
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
		};*/

		mat3 operator+(mat3 a, const mat3& b) {
			return a.add(b);
		};

		mat3 operator-(mat3 a, const mat3& b) {
			return a.sub(b);
		};

		/*mat3 operator*(mat3 a, const mat3& b) {
			return a.multiply(b);
		};*/

		mat3 operator*(mat3 m, const double& s) {
			return m.scale(s);
		};

		std::ostream& operator<<(std::ostream& stream, const mat3& matrix) {
			stream << "-Mat3\n" << matrix.data[0] << ", " << matrix.data[1] << ", " << matrix.data[2] << "\n"
								<< matrix.data[3] << ", " << matrix.data[4] << ", " << matrix.data[5] << "\n"
								<< matrix.data[6] << ", " << matrix.data[7] << ", " << matrix.data[8];
			return stream;
		};

	};
};