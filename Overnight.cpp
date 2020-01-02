

#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Overnight.h"
using namespace std;

Overnight::Overnight(const string& sendername, const string& senderadd, const string& sendercity,
	const string& senderstate, const string& receivername, const string& receiveradd, const string& receivercity,
	const string& receriverstate, int senderzip, int receiverzip, double w, double c, double tdr)

	:Package(sendername, senderadd, sendercity, senderstate, receivername, receiveradd,
		receivercity, receriverstate, senderzip, receiverzip, w, c) {

	setOvernightRate(tdr);
}

void Overnight::setOvernightRate(double tdr) {
	flatRate = tdr;
}

double Overnight::getOvernightRate() const {
	return flatRate;
}

double Overnight::calculateCost() const {
	return flatRate + Package::calculateCost();
}

string Overnight::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "Sender Name: " << sName << "\nAddress: " << sAddress << " " << sCity << " " << sState << " " << sZipcode << endl;
	output << "\nReceiver Name: " << rName << "\nAddress: " << rAddress << " " << rCity << " " << rState << " " << rZipcode << endl;
	output << "\nThe cost of Overnight package: " << Overnight::calculateCost() << endl;
	return output.str();
}