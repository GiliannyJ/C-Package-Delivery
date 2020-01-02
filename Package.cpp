// Package Class Member-Function Definitions

#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Package.h"
using namespace std;

Package::Package(const string& sendername, const string& senderadd, const string& sendercity,
	const string& senderstate, const string& receivername, const string& receiveradd, const string& receivercity,
	const string& receriverstate, int senderzip, int receiverzip, double w, double c) {

	sName = sendername;
	sAddress = senderadd;
	sCity = sendercity;
	sState = senderstate;
	rName = receivername;
	rAddress = receiveradd;
	rCity = receivercity;
	rState = receriverstate;
	sZipcode = senderzip;
	rZipcode = receiverzip;
	weight = w;
	cost = c;
	setWeight(w);
	setCost(c);

}

void Package::setSName(const string& sendername) {
	sName = sendername;
}

string Package::getSName()const {
	return sName;
}

void Package::setSAddress(const string& senderadd) {
	sAddress = senderadd;
}

string Package::getSAddress()const {
	return sAddress;
}

void Package::setSCity(const string& sendercity) {
	sCity = sendercity;
}

string Package::getSCity()const {
	return sCity;
}

void Package::setSState(const string& senderstate) {
	sState = senderstate;
}

string Package::getSState()const {
	return sState;
}

void Package::setRName(const string& receivername) {
	rName = receivername;
}

string Package::getRName()const {
	return rName;
}

void Package::setRAddress(const string& receiveradd) {
	rAddress = receiveradd;
}

string Package::getRAddress()const {
	return rAddress;
}

void Package::setRCity(const string& receivercity) {
	rCity = receivercity;
}

string Package::getRCity()const {
	return rCity;
}

void Package::setRState(const string& receiverstate) {
	rState = receiverstate;
}

string Package::getRState()const {
	return rState;
}

void Package::setSZipcode(int senderzip) {
	sZipcode = senderzip;
}

int Package::getSZipcode() const {
	return sZipcode;
}

void Package::setRZipcode(int receiverzip) {
	rZipcode = receiverzip;
}

int Package::getRZipcode() const {
	return rZipcode;
}

void Package::setWeight(double w) {
	if (weight < 0.0) {
		throw invalid_argument("Weight must be more than 0");
	}

	weight = w;
}

double Package::getWeight() const {
	return weight;
}

void Package::setCost(double c) {
	if (cost < 0.0) {
		throw invalid_argument("Weight must be more than 0");
	}

	cost = c;
}

double Package::getCost() const {
	return cost;
}

double Package::calculateCost() const {
	return weight * cost;
}

string Package::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "Sender Name: " << sName << "\nAddress: " << sAddress << " " << sCity << " " << sState << " " << sZipcode << endl;
	output << "\nReceiver Name: " << rName << "\nAddress: " << rAddress << " " << rCity << " " << rState << " " << rZipcode << endl;
	output << "\nThe cost of regular package: " << Package::calculateCost() << endl;
	return output.str();
}





