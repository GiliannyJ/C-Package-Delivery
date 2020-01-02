

#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "TwoDay.h"
using namespace std;

TwoDay::TwoDay(const string& sendername, const string& senderadd, const string& sendercity,
	const string& senderstate, const string& receivername, const string& receiveradd, const string& receivercity,
	const string& receriverstate, int senderzip, int receiverzip, double w, double c, double tdr)

	:Package(sendername, senderadd, sendercity, senderstate, receivername, receiveradd,
		receivercity, receriverstate, senderzip, receiverzip, w, c) {

	setTwoDayRate(tdr);
}

void TwoDay::setTwoDayRate(double tdr) {
	flatRate = tdr;
}

double TwoDay::getTwoDayRate() const {
	return flatRate;
}

double TwoDay::calculateCost() const {
	return flatRate + Package::calculateCost();
}

//string TwoDay::toString() const {
//	ostringstream output;
//	output << fixed << setprecision(2);
//	output << "Sender Name: " << sName << "\nAddress: " << sAddress << " " << sCity << " " << sState << " " << sZipcode << endl;
//	output << "\nReceiver Name: " << rName << "\nAddress: " << rAddress << " " << rCity << " " << rState << " " << rZipcode << endl;
//	output << "\nThe cost of TwoDay package: " << TwoDay::calculateCost() << endl;
//	return output.str();
//}


string TwoDay::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "Sender Name: " << sName << "\nAddress: " << sAddress << " " << sCity << " " << sState << " " << sZipcode << endl;
	output << "\nReceiver Name: " << rName << "\nAddress: " << rAddress << " " << rCity << " " << rState << " " << rZipcode << endl;
	output << "\nThe cost of TwoDay package: " << /*TwoDay::calculateCost()*/ endl;
	return output.str();
}

