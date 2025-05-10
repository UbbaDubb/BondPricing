//ZeroCouponBond.hpp

#ifndef ZEROCOUPONBOND_H
#define ZEROCOUPONBOND_H


#include "Bond.hpp"

class ZeroCouponBond : public Bond
{


	public:
	// Constructors/Destructor
	ZeroCouponBond();
	ZeroCouponBond(double F_in, double T_in, double y_in, double freq_in, double B_in, bool show);
	ZeroCouponBond(const ZeroCouponBond& bond);

	~ZeroCouponBond();

	// Assignment operator
	ZeroCouponBond& operator=(const ZeroCouponBond& bond);

	// Implementation of pure virtual methods
	virtual double MacaulayDuration() const override;
	virtual double ModifiedDuration() const override;
	virtual double Convexity() const override;

};

#endif