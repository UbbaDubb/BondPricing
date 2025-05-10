// Option.hpp
#ifndef BOND_H
#define BOND_H

#include <string>
#include <cmath>
#include <iostream>

class Bond
{
protected:
	double F;         // Face value of the bond
	double C;         // Annual coupon rate
	double T;         // Time to maturity in years
	double y;         // Yield
	double freq;      // Payment frequency per year (e.g., 0.5 for semi-annual)
	double B;	  // Price of the bond
	bool showDetails; // Flag to show details


public:
	// Constructors/Destructor
	Bond();
	Bond(double F_in, double C_in, double T_in, double y_in, double freq_in, double B_in, bool show);
	Bond(const Bond& bond);

	virtual ~Bond() = 0;  // Pure virtual destructor to make this abstract

	// Assignment operator
	Bond& operator=(const Bond& bond);

	// Pure virtual methods
	virtual double calcPrice() const = 0;
	virtual double MacaulayDuration() const = 0;
	virtual double ModifiedDuration() const = 0;
	virtual double Convexity() const = 0;

	// Accessor/modifier methods for parameters
	void faceValue(double F_in);
	const double faceValue();
	void couponRate(double C_in);
	const double couponRate();
	void Maturity(double T_in);
	const double Maturity();
	void yield(double y_in);
	const double yield();
	void frequency(double freq_in);
	const double frequency();
	void price(double B_in);
	const double price();
	void Details(bool show);
	const bool Details() const;

};
#endif