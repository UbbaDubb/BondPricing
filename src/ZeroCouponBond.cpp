#include "ZeroCouponBond.hpp"

// Constructors/Destructor

//////////// Constructors/Destructor/Assignment Operator /////////////////////////////////

// Default Constructor
ZeroCouponBond::ZeroCouponBond() : Bond() {}

// Constructor by input
ZeroCouponBond::ZeroCouponBond(double F_in, double T_in, double y_in, double freq_in, double B_in, bool show) : Bond(F_in, 0.0, T_in, y_in, freq_in, B_in, show) {}

// Copy Constructor
ZeroCouponBond::ZeroCouponBond(const ZeroCouponBond& Bond) : Bond(Bond) {}

// Destructor
ZeroCouponBond::~ZeroCouponBond() {}

// Assignment operator
ZeroCouponBond& ZeroCouponBond::operator=(const ZeroCouponBond& Bond)
{
	if (this == &Bond)
		return *this;

	Bond::operator=(Bond);

	return *this;
}

// Implementation of pure virtual methods

double ZeroCouponBond::MacaulayDuration() const
{
	return T;
}

double ZeroCouponBond::ModifiedDuration() const
{
	return T / (1 + (y / freq));
}

double ZeroCouponBond::Convexity() const
{
	return (T * (T + 1)) / ((1 + (y / freq)) * (1 + (y / freq)) * freq);
}