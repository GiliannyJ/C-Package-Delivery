
#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include <string>
#include "Package.h"

class Overnight : public Package {
public:

	Overnight(const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, int = 1, int = 1, double = 0.0, double = 0.0, double = 0.0);

	void setOvernightRate(double);
	double getOvernightRate() const;


	virtual double calculateCost() const;

	std::string toString() const;

protected:
	double flatRate;

};

#endif

