#include "Stationary.h"
namespace Stationary {
	System::String^ Stationary::Name() { return gcnew String(name.c_str()); }
	void Stationary::Name(String^ name) { MarshalString(name, this->name); }

	double Stationary::Price() { return price; }
	void Stationary::Price(double price) {
		if (price < 0) {
			throw InvalidPriceException();
		}
		this->price = price;
	}
}