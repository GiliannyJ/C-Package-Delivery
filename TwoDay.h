
#ifndef TWODAY_H
#define TWODAY_H

#include <string>
#include "Package.h"

class TwoDay : public Package {
public:

	TwoDay(const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, int = 1, int = 1, double = 0.0, double = 0.0, double = 0.0);

	void setTwoDayRate(double);
	double getTwoDayRate() const;


	virtual double calculateCost() const;

	std::string toString() const;

protected:
	double flatRate;

};

#endif

