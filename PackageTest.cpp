#include<iostream>
#include "TwoDay.h"
#include "Overnight.h"
#include <vector>
using namespace std;

int main()
{
	TwoDay two{ "Gilianny", "123 Lane", "New York", "NY", "Maurice", "456 Road",
		"Newark", "NJ", 10040, 70123, 18.00, .50, 2.00 };

	Overnight three{ "Gilianny", "123 Lane", "New York", "NY", "Maurice", "456 Road",
		"Newark", "NJ", 10040, 70123, 18.00, .50, 10.00 };

	TwoDay four{ "Kenia", "789 Road", "New York", "NY", "Dalina", "102 Street",
		"Newark", "NJ", 10040, 70123, 20.00, .50, 2.00 };

	Overnight five{ "Kenia", "789 Road", "New York", "NY", "Dalina", "102 Street",
		"Newark", "NJ", 10040, 70123, 20.00, .50, 10.00 };

	vector<Package *> packages = { &two, &three, &four, &five };

	//packages.push_back(&two);
	//packages.push_back(&three);

	double totalShippingCost = 0;


	for (int i = 0; i <= 3; i++)
	{
		cout << "Sender: " 
			<< (*packages[i]).getSName() << endl
			<< (*packages[i]).getSAddress() << endl
			<< (*packages[i]).getSCity() << ", " 
			<< (*packages[i]).getSState() << " " 
			<< (*packages[i]).getSZipcode() << endl << endl
			<< "Recipient " 
			<< (*packages[i]).getRName() << endl
			<< (*packages[i]).getRAddress() << endl
			<< (*packages[i]).getRCity() << ", " 
			<< (*packages[i]).getRState()<< " " 
			<< (*packages[i]).getRZipcode() << endl << endl
			<< "Shipping cost is: $" 
			<< (*packages[i]).calculateCost() << endl << endl
			<< "  ------------------------------------------------------  " << endl << endl;

			totalShippingCost += (*packages[i]).calculateCost();
		
	}

	cout << "Total Packages: " << packages.size()  
		 << "\nTotal shipping cost: $" << totalShippingCost <<endl;


	system("pause");
	return 0;
}