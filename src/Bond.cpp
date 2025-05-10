// Bond.cpp
#include "Bond.hpp"

// Constructors/Destrcutror

// Default Constructor
Bond::Bond() : F(0.0), C(0.0), T(0.0), y(0.0), freq(1.0), B(0.0), showDetails(false) {}

// Constructor by input
Bond::Bond(double F_in, double C_in, double T_in, double y_in, double freq_in, double B_in, bool show) : F(F_in), C(C_in), T(T_in), y(y_in), freq(freq_in), B(B_in), showDetails(show) {}

// Copy Constructor
Bond::Bond(const Bond& bond) : F(bond.F), C(bond.C), T(bond.T), y(bond.y), freq(bond.freq), showDetails(bond.showDetails) {}

// Destructor
Bond::~Bond() {}

// Assignment operator
Bond& Bond::operator=(const Bond& bond)
{
	if (this == &bond)
		return *this;
	F = bond.F;
	C = bond.C;
	T = bond.T;
	y = bond.y;
	freq = bond.freq;
	showDetails = bond.showDetails;
	return *this;
}

// Getter/Setter Functions
void Bond::faceValue(double F_in) { F = F_in; }
const double Bond::faceValue() { return F; }
void Bond::couponRate(double C_in) { C = C_in; }
const double Bond::couponRate() { return C; }
void Bond::Maturity(double T_in) { T = T_in; }
const double Bond::Maturity() { return T; }
void Bond::yield(double y_in) { y = y_in; }
const double Bond::yield() { return y; }
void Bond::frequency(double freq_in) { freq = freq_in; }
const double Bond::frequency() { return freq; }
void Bond::price(double B_in) { B = B_in; }
const double Bond::price() { return B; }
void Bond::Details(bool show) { showDetails = show; }
const bool Bond::Details() const { return showDetails; }
