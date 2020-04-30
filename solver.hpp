#include <iostream>
#include <string>
#include <complex>
#include <cmath>
using namespace std;

namespace solver{
    class RealVariable{
        private:
            int pow;
            double beforeX;
            double freeNumber;

        public:
            RealVariable() : pow(0), beforeX(0.0), freeNumber(0.0){};
            RealVariable(int pow, double beforex, double freenumber): pow(pow), beforeX(beforex), freeNumber(freenumber){};

            friend RealVariable &operator+(solver::RealVariable &x, RealVariable &y);
            friend RealVariable &operator+(solver::RealVariable &x, double y);
            friend RealVariable &operator+(double y, solver::RealVariable &x);

            friend RealVariable &operator-(RealVariable &x, RealVariable &y);
            friend RealVariable &operator-(RealVariable &x, double y);
            friend RealVariable &operator-(double y, RealVariable &x);

            friend RealVariable &operator==(RealVariable &x, RealVariable &y);
            friend RealVariable &operator==(RealVariable &x, double y);
            friend RealVariable &operator==(double y, RealVariable &x);
            
            friend RealVariable &operator*(RealVariable &x, double y);
            friend RealVariable &operator*(double y, RealVariable &x);
            friend solver::RealVariable &operator*(RealVariable &x, RealVariable &y);

            friend RealVariable &operator/(RealVariable &x, RealVariable &y);
            friend RealVariable &operator/(RealVariable &x, double y);
            friend RealVariable &operator/(double y, RealVariable &x);

            friend RealVariable &operator^(RealVariable &x, RealVariable &y);
            friend RealVariable &operator^(RealVariable &x, double y);
            friend RealVariable &operator^(double y, RealVariable &x);
        };

    double solve(RealVariable x);

    class ComplexVariable{
        private:
            double re;
            double im;

        public:
            ComplexVariable() : re(0.0), im(0.0){};
            ComplexVariable(double re, double im): re(re), im(im){};

            friend ComplexVariable &operator+(ComplexVariable &x, ComplexVariable &y);
            friend ComplexVariable &operator+(ComplexVariable &x, std::complex<double> y);
            friend ComplexVariable &operator+(std::complex<double> y, ComplexVariable &x);
            friend ComplexVariable &operator+(ComplexVariable &x, double y);
            friend ComplexVariable &operator+(double y, ComplexVariable &x);

            friend ComplexVariable &operator-(ComplexVariable &x, ComplexVariable &y);
            friend ComplexVariable &operator-(ComplexVariable &x, std::complex<double> y);
            friend ComplexVariable &operator-(std::complex<double> y, ComplexVariable &x);
            friend ComplexVariable &operator-(ComplexVariable &x, double y);
            friend ComplexVariable &operator-(double y, ComplexVariable &x);

            friend ComplexVariable &operator==(ComplexVariable &x, ComplexVariable &y);
            friend ComplexVariable &operator==(ComplexVariable &x, double y);
            friend ComplexVariable &operator==(double y, ComplexVariable &x);

            friend ComplexVariable &operator*(ComplexVariable &x, ComplexVariable &y);
            friend ComplexVariable &operator*(ComplexVariable &x, double y);
            friend ComplexVariable &operator*(double y, ComplexVariable &x);

            friend ComplexVariable &operator/(ComplexVariable &x, ComplexVariable &y);
            friend ComplexVariable &operator/(ComplexVariable &x, double y);
            friend ComplexVariable &operator/(double y, ComplexVariable &x);

            friend ComplexVariable &operator^(ComplexVariable &x, ComplexVariable &y);
            friend ComplexVariable &operator^(ComplexVariable &x, double y);
            friend ComplexVariable &operator^(double y, ComplexVariable &x);

    };

double solve(ComplexVariable y);

}