
#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package {
public:
	Package(const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, int = 1, int = 1, double = 0.0, double = 0.0);

	void setSName(const std::string&);
	std::string getSName() const;

	void setSAddress(const std::string&);
	std::string getSAddress() const;

	void setSCity(const std::string&);
	std::string getSCity() const;

	void setSState(const std::string&);
	std::string getSState() const;

	void setRName(const std::string&);
	std::string getRName() const;

	void setRAddress(const std::string&);
	std::string getRAddress() const;

	void setRCity(const std::string&);
	std::string getRCity() const;

	void setRState(const std::string&);
	std::string getRState() const;

	void setSZipcode(int);
	int getSZipcode() const;

	void setRZipcode(int);
	int getRZipcode() const;

	void setWeight(double);
	double getWeight() const;

	void setCost(double);
	double getCost() const;

	virtual double calculateCost() const;
	std::string toString() const;

protected:
	std::string sName;
	std::string sAddress;
	std::string sCity;
	std::string sState;
	std::string rName;
	std::string rAddress;
	std::string rCity;
	std::string rState;
	int sZipcode;
	int rZipcode;
	double weight;
	double cost;
};


#endif




