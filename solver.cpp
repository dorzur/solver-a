#include "solver.hpp"
#include <complex>
using namespace solver;

double solver::solve(RealVariable x){
    return 1;
}

double solver::solve(ComplexVariable x){
    return 1;
}

solver::RealVariable &solver::operator+(RealVariable &x, RealVariable &y){
    return x;
}

solver::RealVariable &solver::operator+(RealVariable &x, double y){
    return x;
}

solver::RealVariable &solver::operator+(double y, RealVariable &x){
    return solver::operator+(x, y);
}

solver::RealVariable &solver::operator-(RealVariable &x, RealVariable &y){
    return x;
}

solver::RealVariable &solver::operator-(RealVariable &x, double y){
    x.freeNumber = x.freeNumber - y;
    return x;
}

solver::RealVariable &solver::operator-(double y, RealVariable &x){
    x.freeNumber = y - x.freeNumber;
    return x;
}

solver::RealVariable &solver::operator*(RealVariable &x, RealVariable &y){
    return x;
}

solver::RealVariable &solver::operator*(RealVariable &x, double y){
    return x;
}

solver::RealVariable &solver::operator*(double y, RealVariable &x){
    return x;
}

solver::RealVariable &solver::operator/(RealVariable &x, RealVariable &y){
    return x;
}

solver::RealVariable &solver::operator/(RealVariable &x, double y){
    return x;
}

solver::RealVariable &solver::operator/(double y, RealVariable &x){
   return x;
}

solver::RealVariable &solver::operator^(RealVariable &x, RealVariable &y){
    return x;
}

solver::RealVariable &solver::operator^(RealVariable &x, double y){
    return x;
}

solver::RealVariable &solver::operator^(double y, RealVariable &x){
    return x;
}

solver::RealVariable &solver::operator==(RealVariable &x, RealVariable &y){
    return x;
}

solver::RealVariable &solver::operator==(RealVariable &x, double y){
    return x;
}

solver::RealVariable &solver::operator==(double y, RealVariable &x){
    return x;
}

solver::ComplexVariable &solver::operator+(ComplexVariable &x, ComplexVariable &y){
    x.re = x.re + y.re;
    x.im = x.im = y.im;
    return x;
}

solver::ComplexVariable &solver::operator+(ComplexVariable &x, std::complex<double> y){
    // x.re = x.re + y.real;
    // x.im = x.im = y.imag;
    return x;
}

solver::ComplexVariable &solver::operator+(std::complex<double> y, ComplexVariable &x){
    // x.re = x.re + y.real;
    // x.im = x.im = y.imag;
    return x;
}

solver::ComplexVariable &solver::operator+(ComplexVariable &x, double y){
    x.re = x.re + y;
    return x;
}

solver::ComplexVariable &solver::operator+(double y, ComplexVariable &x){
    x.re = x.re + y;
    return x;
}

solver::ComplexVariable &solver::operator-(ComplexVariable &x, ComplexVariable &y){
    x.re = x.re - y.re;
    x.im = x.im = y.im;
    return x;
}

solver::ComplexVariable &operator-(ComplexVariable &x, std::complex<double> y){
    // x.re = x.re + y.real;
    // x.im = x.im = y.imag;
    return x;
}

solver::ComplexVariable &operator-(std::complex<double> y, ComplexVariable &x){
    // x.re = x.re + y.real;
    // x.im = x.im = y.imag;
    return x;
}

solver::ComplexVariable &solver::operator-(ComplexVariable &x, double y){
    x.re = x.re - y;
    return x;
}

solver::ComplexVariable &solver::operator-(double y, ComplexVariable &x){
    x.re = y - x.re;
    return x;
}

solver::ComplexVariable &solver::operator*(ComplexVariable &x, ComplexVariable &y){
    x.re = ((x.re * y.re) - (x.im * y.im));
    x.im = ((x.re * y.im) + (x.im * y.re));
    return x;
}

solver::ComplexVariable &solver::operator*(ComplexVariable &x, double y){
    x.re = x.re * y;
    x.im = x.im * y;
    return x;
}

solver::ComplexVariable &solver::operator*(double y, ComplexVariable &x){
    x.re = x.re * y;
    x.im = x.im * y;
    return x;
}

solver::ComplexVariable &solver::operator/(ComplexVariable &x, ComplexVariable &y){
    x.re = ((x.re * y.re) - (x.im * y.im));
    x.im = ((x.re * y.im) + (x.im * y.re));
    return x;
}

solver::ComplexVariable &solver::operator/(ComplexVariable &x, double y){
    x.re = x.re * y;
    x.im = x.im * y;
    return x;
}

solver::ComplexVariable &solver::operator/(double y, ComplexVariable &x){
    x.re = x.re * y;
    x.im = x.im * y;
    return x;
}

solver::ComplexVariable &solver::operator^(ComplexVariable &x, ComplexVariable &y){
    x.re = ((x.re * y.re) - (x.im * y.im));
    x.im = ((x.re * y.im) + (x.im * y.re));
    return x;
}

solver::ComplexVariable &solver::operator^(ComplexVariable &x, double y){
    x.re = x.re * y;
    x.im = x.im * y;
    return x;
}

solver::ComplexVariable &solver::operator^(double y, ComplexVariable &x){
    x.re = x.re * y;
    x.im = x.im * y;
    return x;
}

solver::ComplexVariable &solver::operator==(ComplexVariable &x, ComplexVariable &y){
    x.re = ((x.re * y.re) - (x.im * y.im));
    x.im = ((x.re * y.im) + (x.im * y.re));
    return x;
}

solver::ComplexVariable &solver::operator==(ComplexVariable &x, double y){
    x.re = x.re * y;
    x.im = x.im * y;
    return x;
}

solver::ComplexVariable &solver::operator==(double y, ComplexVariable &x){
    x.re = x.re * y;
    x.im = x.im * y;
    return x;
}